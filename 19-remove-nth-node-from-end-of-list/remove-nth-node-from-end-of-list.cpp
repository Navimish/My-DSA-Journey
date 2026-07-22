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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(!head) return nullptr;

        ListNode* dummy = new ListNode(0,head);

        ListNode* temp = head;
        int len =0;

        while(temp){
            len++;
            temp = temp->next;
        }

        int from_start = len-n;

        temp = dummy;

        while(from_start>0){
            from_start--;
            temp= temp->next;
        }

        temp->next = temp->next->next;

        return dummy->next;




        
    }
};