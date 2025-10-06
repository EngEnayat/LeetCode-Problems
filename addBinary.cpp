class Solution {
    public:
        string addBinary(string a, string b) {
            string res= "";
            int i = a.size()-1, j = b.size()-1;
            int remainder = 0;
            while(i >=0 || j >=0 || remainder)
            {
                if(i >= 0) remainder += a[i--] -'0';
                if(j >=0) remainder += b[j--] -'0';
                res += remainder %2 + '0';
                remainder /=2;
            }
            reverse(res.begin(), res.end());
            return res;
        }
    };