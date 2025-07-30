class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
            unordered_map<int, int> comp;
            
            vector<int> result;
            for(int it: nums1) comp[it] = 0;
            for(int j : nums2) 
            {
                if(comp.count(j)) comp[j]++;
            }
            for(auto it: comp)
            {
                if(it.second != 0) result.push_back(it.first);
            }
            return result;
        }
    };