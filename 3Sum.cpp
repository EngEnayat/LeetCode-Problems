class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            set<vector<int>> s;
            vector<vector<int>> res;
            for(int i=0; i<nums.size(); i++)
            {
                if(i > 0 && nums[i] == nums[i -1]) continue;
                if(nums[i] > 0) break;
    
                int left = i+1, right = nums.size()-1;
                while(left < right)
                {
                    int total = nums[i] + nums[left] + nums[right];
                    if(total == 0)
                    {
                        s.insert({nums[i], nums[left], nums[right]});
                        left++;
                        right--;
                    }
                    if(total < 0) left++;
                    if(total > 0) right--;
                }
            }
            for(vector<int> i: s)
                res.push_back(i);
            return res;
        }
    };