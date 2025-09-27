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

        ListNode* temp_A = headA;
        ListNode* temp_B = headB;

        int la =0;
        int lb =0;

        while(temp_A){
            la++;
            temp_A = temp_A->next;

        }
        while(temp_B){
            lb++;
            temp_B = temp_B->next;

        }

        int diff = abs(lb-la);

        if(la>lb){
            while(diff--){
                headA = headA->next;
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