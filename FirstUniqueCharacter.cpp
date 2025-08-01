class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, int> um;
            for(char c: s) um[c]++;
            for(int i=0; i<s.size();i++)
            {
                if(um.at(s[i]) == 1) return i;
            }
            return -1;
        }
    };