/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode ans;
        ListNode* tail = &ans;
        
        // Iterate over both lists while both have elements
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } 
            else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        
        // If one of the lists still has elements, append it to the merged list
        if (list1 != nullptr) {
            tail->next = list1;
        } 
        else {
            tail->next = list2;
        }
        
        return ans.next;
    }
};
