class Solution {
    public:
        string countAndSay(int n) {
            string res = "1";
            for(int i = 1; i<n; i++)
            {
            vector<pair<char,char>> v = mapping(res);
            res = ChangeState(v);
            }
            return res;
        }
    private:
        vector<pair<char,char>> mapping(string s)
        {
            
            vector<pair<char, char>> res;
            for(int i=0; i<s.size();i++)
            {
                pair<char,char> temp;
                int j = i;
                int n = 0;
                while(s[i] == s[j]) {
                    j++;
                    n++;
                }
                i = j -1;
                temp.first = s[i];
                temp.second = n + '0';
                res.push_back(temp);        
            }
            return res;
        }
        string ChangeState(vector<pair<char, char>> &v)
        {
            string s = "";
            for(auto it: v){
                s+= it.second;
                s+= it.first;
            }
            return s;
        }
    };