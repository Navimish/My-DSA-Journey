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
    bool isPalindrome(ListNode* head) {

        ListNode* temp = head;
        int l =0;

        while(temp){
            l++;
            temp = temp->next;
        }


        int mid = l/2;

        temp = head;

        while(mid--){
            temp = temp->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = temp;

        while(temp){

            curr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
            
        }

        while(head && prev){
            if(head->val != prev->val) return false;
            head= head->next;
            prev = prev->next;
        }

        return  true;
        
    }
};