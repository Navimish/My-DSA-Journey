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

        ListNode* temp = headA;

        int la = 0;
        int lb =0;

        while(temp){
            la++;
            temp = temp->next;
        }

        temp = headB;

          while(temp){
            lb++;
            temp = temp->next;
        }

        int diff = abs(la-lb);

        if(la>lb){
            while(diff--){
                headA =headA->next;
            }
        }else{
            while(diff--){
                headB = headB->next;
            }
        }

        while(headA && headB){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return NULL;


    }
};