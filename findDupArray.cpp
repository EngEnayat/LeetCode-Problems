class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            vector<int> result;
            unordered_set<int> us;
            for(int i: nums){
                if(us.count(i))
                {
                    result.push_back(i);
                }
                us.insert(i);
            }
            return result;
        }
    };