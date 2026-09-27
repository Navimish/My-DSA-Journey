/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* A = headA;
        ListNode* B = headB;

        int la = 0;
        int lb = 0;

        while(A){
            la++;
            A = A->next;

        }
        while(B){
            lb++;
            B = B->next;

        }

        int diff = abs(la-lb);
        A = headA;
        B = headB;

        if(la>lb){
            while(diff--) A = A->next;
        }else{
            while(diff--) B= B->next;
        }


        while(A && B){
             if(A == B) return A;
             A = A->next;
             B = B->next;
        }

        return NULL;
        
    }
};