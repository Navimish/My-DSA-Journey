class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for(auto& x : jewels){
            int cnt = std::count(stones.begin(),stones.end(),x);
            count += cnt;
        }

        return count;
        
    }
};