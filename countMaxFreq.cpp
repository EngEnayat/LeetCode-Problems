class Solution {
    public:
        int maxFrequencyElements(vector<int>& nums) {
            unordered_map<int,int> um;
            int max = 0;
            for(int i: nums)
            {
                um[i]++;
                if(um[i] > max) max = um[i];
            }
            int total = 0;
            for(auto it: um)
                if(it.second == max) total += it.second;
            return total;
        }
    };