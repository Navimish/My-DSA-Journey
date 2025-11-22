class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int n : nums) {
            xorr ^= n;
        }
        //xorr = a ^ b ;
        //now i need to find that a & b. as the two number is different i can try to find one set bit .
        // let it be the rightmost set bit. 
        unsigned int diff = xorr & - (unsigned int) xorr;
        int a = xorr;
        int b = xorr;
        for(int n : nums) {
            if(n & diff) {
                a ^= n;
            }
            else {
                b ^= n;
            }
        }
        return {a,b};
    }
};