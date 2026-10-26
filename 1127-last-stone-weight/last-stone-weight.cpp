class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> pq(stones.begin(), stones.end());


        while(pq.size() > 1  ){

           int y = pq.top(); pq.pop();
           int x = pq.top(); pq.pop();

            int n = y-x;
            pq.push(n);
        }


        return pq.top();
        
    }
};