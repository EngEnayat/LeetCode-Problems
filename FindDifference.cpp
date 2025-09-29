class Solution {
    public:
        char findTheDifference(string s, string t) {
            if(s.empty()) {cout << "s empty"; return t[0];}
            unordered_map<char,int> um;
            for(char c: s)
                um[c]++;
            for(char c: t)
                um[c]--;
            for(auto it: um)
                if(it.second != 0) return it.first;
            return ' ';
        }
};