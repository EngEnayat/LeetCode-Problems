class Solution {
    public:
        string removeDuplicates(string s) 
        {
            if(s.size()<=1) return s;
            stack<char> cleaner;
            for(char c: s)
            {
                if(!cleaner.empty() &&  cleaner.top() == c) cleaner.pop();
                else cleaner.push(c);
            }
            string res = "";
            while(!cleaner.empty())
            {
                res += cleaner.top();
                cleaner.pop();
            }
            reverse(res.begin(), res.end());
            return res;
        }   
    };