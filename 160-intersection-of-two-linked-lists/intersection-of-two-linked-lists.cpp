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

        ListNode* dummya = headA;
        ListNode* dummyb = headB;

        int lengtha = 0;
        int lengthb = 0;

        while(dummya){
            dummya = dummya->next;
            lengtha++;
        }

        while(dummyb){
            dummyb = dummyb->next;
            lengthb++;
        }

        int diff = abs(lengtha-lengthb);

        while(diff--){
             if(lengtha>lengthb){
                headA = headA->next;
            }
            
            if(lengtha<lengthb){
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