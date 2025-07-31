class Solution {
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            if(nums.size()<=1) return false;
            unordered_map<int,int> dup;
            vector<bool> validate;
            for(int i=0; i<nums.size();i++)
            {
                if(dup.count(nums[i])) 
                {
                    if(abs(i- dup.at(nums[i])) <= k) return true;
                }
                dup[nums[i]] = i;
            }
                return false;
        }
    };