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

        if(!head) return false;

        ListNode* curr = head;
        int l = 0;

        while(curr){
            l++; curr = curr->next;

        }

        int half = l/2;

        curr = head;

        while(half--){
            curr =curr->next;
        }

        // curr = curr->next;

        ListNode* prev = nullptr;

        while(curr){

            ListNode* temp = curr->next;
            curr->next = prev;

            prev = curr;
            curr = temp;
        }


        while(head && prev ){

            if(head->val != prev->val) return false;
            head = head->next;
            prev = prev->next;
        }

        return true;




        
    }
};