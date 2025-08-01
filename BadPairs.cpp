class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            unordered_map<int, int> freq;
            long long goodPairs = 0;
            long long total = nums.size() * (nums.size() - 1);
            for(int i=0; i<nums.size();i++)
            {
                int key = i - nums[i];
                goodPairs += freq[key];
                freq[key]++;
            }
            return total/ 2 - goodPairs;
        }
    };