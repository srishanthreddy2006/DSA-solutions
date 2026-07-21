class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next)
            return head;

        int length = 0;
        ListNode* current = head;

        while(current){
            length++;
            current = current->next;
        }

        k =k%length;

        if(k == 0)
            return head;

        ListNode* fastpointer = head;
        ListNode* slowpointer = head;

        while(k--){
            fastpointer = fastpointer->next;
        }

        while(fastpointer->next){
            fastpointer = fastpointer->next;
            slowpointer = slowpointer->next;
        }

        ListNode* newHead = slowpointer->next;
        slowpointer->next = nullptr;
        fastpointer->next = head;

        return newHead;
    }
};