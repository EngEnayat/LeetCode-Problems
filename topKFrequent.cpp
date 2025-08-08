struct Compare
{
    bool operator() (const std::pair<int,int>& p1, const std::pair<int,int>& p2) const
    {
        return p1.second > p2.second; // min heap
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() <=1) return nums;
        unordered_map<int, int> um;
        for(int i: nums) um[i]++;
        priority_queue<pair<int,int> , std::vector<std::pair<int, int>>, Compare> pq;
        for(auto it: um)
        {
            pq.push(make_pair(it.first, it.second));
            if(pq.size() > k) pq.pop();
        }
        vector<int> res;
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            res.push_back(p.first);
            pq.pop();
        }
        return res;
    }
};