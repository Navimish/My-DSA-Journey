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

        if(head == NULL) return NULL;

        Node* curr = head;

        //making nodes

        while(curr){
            Node* temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp; 

        }

        //asigning random p

        curr= head;

        while(curr && curr->next){
            if(curr->random == NULL){
                curr->next->random = NULL;
            }else{
                curr->next->random = curr->random->next;
            }

            curr= curr->next->next;
        }

        //splitting;
        Node* newhead =head->next;
        curr = head;

        Node* newcurr = head->next;

        while(curr && newcurr){

            curr->next = curr->next == NULL?NULL:curr->next->next;
            newcurr->next = newcurr->next == NULL?NULL:newcurr->next->next;

            curr = curr->next;
            newcurr = newcurr->next;
        }

        return newhead;





        
    }
};