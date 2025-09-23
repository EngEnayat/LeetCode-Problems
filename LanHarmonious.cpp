#define MIN -1000000
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i: nums) freq[i]++;
        int Longest = MIN;
        for(auto it: freq)
        {
            if(freq.count(it.first + 1)) 
                Longest = max(Longest, it.second + freq[it.first + 1]);
        }
        return Longest!= MIN ? Longest : 0;
    }
};
