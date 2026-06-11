class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> op;
        
        for (string s:strs) {
            vector<int> freq(26, 0);
            string key;
            for(char ch: s) {
                freq[ch-'a']++;
            }
            for(int j=0; j<26; j++) {
                key+='#'+freq[j];
                
            }
            mp[key].push_back(s);
        }
        for(auto pair : mp) {
            op.push_back(pair.second);

        }
        return op;
    }
};
