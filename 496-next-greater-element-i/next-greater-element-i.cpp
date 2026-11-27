class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        stack<int> st;

        vector<int> res;

        int n = nums2.size();

        for(int i = n-1; i>=0; i--){

            if(st.empty()){
                st.push(nums2[i]);
                mp[nums2[i]] = -1;
            }else{

                while(!st.empty() && st.top() < nums2[i]){
                    st.pop();
                }

                if(st.empty()){
                    mp[nums2[i]] = -1;
                }else{
                    mp[nums2[i]] = st.top();
                }

                st.push(nums2[i]);
            }

        }

        for(auto& x: nums1){

            res.push_back(mp[x]);
        }

        return res;
        
    }
};