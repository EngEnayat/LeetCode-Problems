class Solution {
    public:
        vector<int> decimalRepresentation(int n) {
            string s = to_string(n);
            vector<int> res;
            for(int i=s.size()-1; i>=0 ;i--)
                {
                    int j = i;
                    long long value = s[i] -'0';
                    if(value == 0) continue;
                    while(j <= s.size()-1)
                    {
                            value *= 10;
                            j++;
                    }
                    value /= 10;
                    res.push_back(value);
                }
            std::reverse(res.begin(), res.end());
            return res;
        }
    };