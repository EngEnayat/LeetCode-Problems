class Solution {
    public:
        bool checkSubarraySum(vector<int>& nums, int k)
        {
            unordered_map<int,int> um;
            um[0] = -1;
            int sum = 0;
            for(int i=0; i<nums.size(); i++)
            {
                sum += nums[i];
                int rem = sum %k;
                if(um.count(rem))
                {
                    if(i - um[rem] >= 2) return true;
                }
                else   um[rem] = i;
            }
            return false;
        }
    };