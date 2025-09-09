class Solution {
    public:
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
            unordered_map<int,int> um;
            vector<int> &temp = (nums1.size() < nums2.size()? nums1: nums2);
            for(int i: temp)
            {
                um[i]++;
            }
            temp = (temp == nums1? nums2 : nums1);
            vector<int> result;
            for(int i: temp)
            {
                if(um.count(i))
                {
                    if(um[i]<=0) continue;
                    result.push_back(i);
                    um[i]--;
                }
            }
            return result;
        }
    };
    
