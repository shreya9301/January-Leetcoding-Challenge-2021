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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        
        
        while (pre->next) {
            ListNode* curr = pre->next;
            while (curr->next && curr->val == curr->next->val){
                ListNode* temp = curr;
                curr = curr->next;
                delete(temp);
            }
                
            
            if (curr == pre->next) 
                pre = pre->next;
            else 
                pre->next = curr->next;
            
        }
        return dummy->next;
    }
};
