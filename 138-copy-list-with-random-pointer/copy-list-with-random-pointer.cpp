/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(!head) return NULL;

        Node* curr = head;

        while(curr){
            Node* temp = curr ->next;
            Node* newnode = new Node(curr->val);
            curr->next =newnode;
            newnode->next = temp;
            curr = curr->next->next;

        }

        curr= head;

        while(curr){

            if(curr->random == NULL){
                curr->next->random = NULL;
            }else{

            curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        curr =head;
        Node* newcurr = curr->next;
        Node* newhead = newcurr;


        while(curr && newcurr){
            curr->next = curr->next == NULL?NULL:curr->next->next;
            newcurr->next = newcurr->next == NULL?NULL:newcurr->next->next;

            curr= curr->next;
            newcurr = newcurr->next;
        }

        return newhead;








        
    }
};