class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int, int> maj;
            for(int i: nums)
                maj[i]++;
            for(auto it: maj)
            {
                if(it.second > nums.size()/2) return it.first;
            }
            return -1;
        }
    };