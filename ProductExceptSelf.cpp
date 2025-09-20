class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            set<int> st;
            vector<int> res;
            int total = 1;
            for(int i =0; i< nums.size() ; i++)
            {
                if(nums[i] == 0){
                    st.insert(i);
                    continue;
                }
                else total *= nums[i];
            }
            bool hasZero = !st.empty();
            if(hasZero)
            {
                for(int i=0; i<nums.size();i++)
                {
                    if(!st.count(i) || st.count(i) && st.size() -1 > 0) 
                    {
                        res.push_back(0);
                        continue;
                    }
                    res.push_back(total);
                }
                return res;
            }
            for(int i=0; i<nums.size();i++)
                res.push_back(total / nums[i]);
            return res;
        }
    };