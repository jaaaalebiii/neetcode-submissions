class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> op;
        
        for (int i = 0; i < strs.size(); i++) {
            vector<int> freq(26, 0);
            string key;
            for(char ch: strs[i]) {
                freq[ch-'a']++;
            }
            for(int j=0; j<26; j++) {
                key+=to_string(freq[j]);
                key+='#';
            }
            mp[key].push_back(strs[i]);
        }
        for(auto pair : mp) {
            op.push_back(pair.second);

        }
        return op;
    }
};
