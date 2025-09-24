class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            set<int> sl;
            vector<int> equal;
            vector<int> less;
            vector<int> bigger;
            for(int i : nums) {
                if(i < pivot) less.push_back(i);
                else if(i== pivot) equal.push_back(i);
                else bigger.push_back(i);
            }
    
            less.insert(less.end(),equal.begin(), equal.end());
            less.insert(less.end(),bigger.begin(), bigger.end());
            return less;
    
        }
    };