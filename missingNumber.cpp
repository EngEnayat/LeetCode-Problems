class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            unordered_set<int> s(nums.begin(), nums.end());
            for(int i=0; i<nums.size();i++)
            {
                if(!s.count(i)) return i;
            }
            return nums.size();
        }
    };
    
            // int n = nums.size();
            // int expected = n * (n + 1) / 2;
            // int actual = 0;
            // for (int num : nums) actual += num;
            // return expected - actual;