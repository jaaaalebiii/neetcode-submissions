class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded;

        for (const string& i : strs) {
            encoded += to_string(i.length()) + "#" + i;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> decoded;
        while (i < s.length()) {
            int j = s.find('#', i);
            string string_length = s.substr(i, j - i);
            int len = stoi(string_length);
            decoded.push_back(s.substr(j+1,len));
            i=j+len+1;
        }
        return decoded;
    }
};
