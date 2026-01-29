class Solution {
public:
    int findDuplicate(vector<int>& num) {

        int slow = num[0];
        int fast = num[num[0]];

        while(slow != fast){
            slow = num[slow];
            fast = num[num[fast]];
        }

        fast = 0;

        while(slow != fast){
            slow = num[slow];
            fast = num[fast];
        }

        return slow;
        
    }
};