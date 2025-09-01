

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* curr = head;
        Node* newhead = nullptr;
        Node* prev = nullptr;

        unordered_map<Node*,Node*> mp;

        if(head == nullptr) return NULL;

        while(curr){

            Node* newnode = new Node(curr->val);

            mp[curr] = newnode;

            if(newhead == NULL){
                newhead = newnode;
                prev = newhead;
            }else{
                prev->next = newnode;
               prev =  newnode;
            }

            curr  = curr->next;



        }

        curr = head;
        Node* newcurr = newhead;

        while(curr){

            if(curr->random == NULL){
                newcurr->random == NULL;
            }else{
                newcurr->random = mp[curr->random];
            }

            curr= curr->next;
            newcurr = newcurr->next;

        }

        return newhead;
        
    }
};