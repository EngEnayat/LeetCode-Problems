struct Compare
{
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) const
    {
        if(a.second == b.second) return a.first > b.first;
        return a.second < b.second;
    }
};
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        if(nums.size() < 1) return -1;
        unordered_map<int, int> um;
        for(int i: nums) um[i]++;
        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
        for(auto it: um){
            if(it.first %2 == 0) pq.push(make_pair(it.first, it.second));
        }
        if(!pq.empty())
        {
            auto a = pq.top();
            return a.first;
        }
        return -1;
    }
};