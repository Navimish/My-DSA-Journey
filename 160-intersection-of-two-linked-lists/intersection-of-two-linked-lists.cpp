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

      

        ListNode* a = headA;
        ListNode* b = headB;

        ListNode *curr = a;

        int la =0;
        int lb =0;

        while(curr != nullptr){
            la++;
            curr = curr->next;
        }

        curr =b;
        while(curr!= nullptr){
            lb++;
            curr = curr->next;
        }


        int diff = abs(la-lb);

        while(diff--){

            if(la>lb){
                a = a->next;
            }else{
                b = b->next;
            }
        }

        while(a != nullptr && b != nullptr){

            if(a == b) return a;
            a = a->next;
            b = b->next;
        }

        return NULL;

        



   
        
    }
};