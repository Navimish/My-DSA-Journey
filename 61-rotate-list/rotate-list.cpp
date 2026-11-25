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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head) return NULL;
       

        int l = 0;
        ListNode* curr = head;

        while(curr){
            l++;
            curr = curr->next;
        }

        curr = head;

        k = k%l;
        if(k==0) return head;
        int from_start = l-k-1;

        while(from_start--) curr = curr->next;
        ListNode* newHead = curr->next;
        curr->next = nullptr;

        curr = newHead;
        while(curr->next) curr = curr->next;
        curr->next = head;

        return newHead;
        
    }
};