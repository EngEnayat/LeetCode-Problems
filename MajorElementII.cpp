class Solution {
    public:
        vector<int> majorityElement(vector<int>& nums) {
            if(nums.size()<=1) return nums;
            unordered_map<int,int> um;
            for(int i: nums)
                um[i]++;
            vector<int> res;
            int n = nums.size() / 3;
            for(auto it: um)
            {
                if(it.second > n) res.push_back(it.first);
            }
            return res;
        }
    };