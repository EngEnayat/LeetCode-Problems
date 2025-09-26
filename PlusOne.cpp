class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
            if(digits[n-1] <9){
                digits[n-1] += 1;
                return digits;
            }
            if(digits[n-1] == 9)
            {
                int r = n-1;
                while(digits[r] == 9)
                {
                    digits[r] = 0;
                    r--;
                    if(r <0) break;
                }
                if(r>=0) {digits[r] += 1; return digits;}
                vector<int> d;
                d.push_back(1);
                for(int i=0; i<n; i++) d.push_back(0);
                return d;
            }
            return {};
        }
    };