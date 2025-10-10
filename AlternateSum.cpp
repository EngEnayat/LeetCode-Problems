class Solution {
    public:
        int alternatingSum(vector<int>& nums) {
            int l = 0, r = 1;
            long long total =0;
            while(l < nums.size() || r < nums.size())
            {
                if(l < nums.size()){total += nums[l]; l += 2;}
                if(r < nums.size()) {total -= nums[r]; r+= 2;}
            }
            return total;
        }
    };