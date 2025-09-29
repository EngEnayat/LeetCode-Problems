class Solution {
    public:
        vector<int> findErrorNums(vector<int>& nums) {
            int missing, duplicate;
            set<int> s;
            sort(nums.begin(), nums.end());
            for(int i=0; i<nums.size(); i++)
            {
                if(s.count(nums[i])) duplicate = nums[i];
                s.insert(nums[i]);
            }
            for(int i=1; i<=nums.size(); i++)
                if(!s.count(i)) return {duplicate, i};
            return {};
        }
    };