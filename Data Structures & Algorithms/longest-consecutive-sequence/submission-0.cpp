class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int ans = 0;
        for(int num : st) {
            if(st.find(num-1) == st.end()) {
                int longest = 1;
                int next = num+1;
                while(st.find(next)!= st.end()) {
                    longest++;
                    next++;
                }
                ans=max(ans,longest);
            }
        }
        return ans;
        
        
    }
};
