class Solution {
    public:
        vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
            int n = s.size();
            vector<int> prefix(n, 0);
            vector<int> left(n, -1), right(n, -1);
    
            int last = -1;
            for(int i=0; i<n;i++)
            {
                if(s[i] == '|') last = i;
                left[i] = last ;
            }
            last = -1;
            for(int i=n-1; i >=0;i--)
            {
                if(s[i] == '|') last = i;
                right[i] = last;
            }
            prefix[0] = (s[0] == '*' ? 1: 0);
            for(int i=1; i< n; i++)
            {
                prefix[i] = prefix[i -1] + (s[i] == '*'? 1: 0);
            }
            vector<int> res;
            for(auto it: queries)
            {
                int l = it[0], r = it[1];
                int start = right[l];
                int end = left[r];
                if(start != -1 && end != -1 && start < end) res.push_back(prefix[end] - prefix[start]);
                else res.push_back(0);
            }
            return res;
        }
    };