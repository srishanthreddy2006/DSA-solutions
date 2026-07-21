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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
        {
            return nullptr;
        }
    ListNode*oddcurrent=head;
    ListNode*evencurrent=head->next;
    ListNode*evenhead=evencurrent;
    while(evencurrent && evencurrent->next)
    {
        oddcurrent->next=evencurrent->next;
        oddcurrent=oddcurrent->next;
        evencurrent->next=oddcurrent->next;
        evencurrent=evencurrent->next;

    } 
    oddcurrent->next=evenhead;
    return head;   
        
    }
};