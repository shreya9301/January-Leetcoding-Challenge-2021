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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode* result = NULL;  

    ListNode** last = &result;  

    while(1)  
    {  
        if (a == NULL)  
        {  
        *last = b;  
        break;  
        }  
        else if (b==NULL)  
        {  
        *last = a;  
        break;  
        }  
        if(a->val <= b->val)  
        {  
        MoveNode(last, &a);  
        }  
        else
        {  
        MoveNode(last, &b);  
        }  
        last = &((*last)->next);  
    }  
    return(result);  
    }  
    void MoveNode(ListNode** destRef, ListNode** sourceRef)  
    {  
        ListNode* newNode = *sourceRef;  
        assert(newNode != NULL);  

        *sourceRef = newNode->next;  

        newNode->next = *destRef;  

        *destRef = newNode;  
    }  
};
