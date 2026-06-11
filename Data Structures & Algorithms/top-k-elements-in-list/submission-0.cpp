class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int i : nums) {            
            freq[i]++;            
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto pair: freq) {
            bucket[pair.second].push_back(pair.first);
        }
        vector<int> ans;
        for(int i=bucket.size()-1; i>0; i--) {
            for(int j : bucket[i]) {
                ans.push_back(j);
                if(ans.size()==k) {
                    return ans;
                }
            }
            
        }
        return ans;

    }
};
