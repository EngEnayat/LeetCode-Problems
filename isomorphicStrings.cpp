class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            if(s.size()!= t.size()) return false;
            unordered_map<char, char> s_char;
            unordered_map<char, char> t_char;
            for(int i=0; i<s.size();i++)
            {
                char c1 = s[i], c2 = t[i];
                if(s_char.count(c1) && t_char[c2]!= c1) return false;
                else if(t_char.count(c2) && s_char[c1]!= c2) return false;
                s_char[c1] = c2;
                t_char[c2] = c1;
            }
            return true;
        }
    };