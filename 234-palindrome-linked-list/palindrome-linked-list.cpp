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

        ListNode* slow = head, *fast = head;

        while(fast != nullptr && fast -> next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *curr = slow;
        ListNode* prev = nullptr;

        while(curr != nullptr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

        }

        ListNode* temp1 = head;

        while(prev!= nullptr){
            if(temp1->val != prev->val) return false;
            temp1 = temp1->next;
            prev = prev->next;
        }

        return true;



        
    }
};