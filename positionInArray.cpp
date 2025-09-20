#include <algorithm>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if(it == nums.end() || *it != target) return{-1,-1};
        int start = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int end = upper_bound(nums.begin(),nums.end(), target) - nums.begin();
        return {start, end-1};
    }
};