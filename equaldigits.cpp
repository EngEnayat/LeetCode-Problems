class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2)
            s = oper(s);
        return s[0] == s[1];
    }
    string oper(string &s)
    {
        string res = "";
        for(int i=0; i< s.size(); i++)
        {   
            if((i+1) >= s.size()) break;
            int a = (s[i]-'0' + s[i+1] - '0') % 10;
            res += to_string( a );
        }
        return res;
    }
};