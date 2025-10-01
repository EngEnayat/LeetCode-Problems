class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
            if(nums.size() < 3) return 0;
            int near = nums[0] + nums[1] + nums[2];
            for(int i=0; i< nums.size()-1; i++)
            {
                int l = i+1, r = nums.size()-1;
                while(r > l)
                {
                    int res = nums[i] + nums[l] + nums[r];
                    if(abs(target - res) < abs(target - near)) near = res;
                    if(res < target) l++;
                    else r--;
                }
            }
            return near;
        }
    };