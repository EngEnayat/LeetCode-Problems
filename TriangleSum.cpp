class Solution {
    public:
        int triangularSum(vector<int>& nums) {
            if(nums.size()==1) return nums[0];
            int n = nums.size();
            for(int i=0; i<n-1; i++)
            {
                nums = Calc(nums);
                cout << nums.size() << endl;
                if(nums.size() == 1) return nums[0];
            }
            return 0;
        }
        vector<int> Calc( vector<int> &nums)
        {
            vector<int>temp;
            int n = nums.size();
            for(int i=0; i<n-1; i++)
            {
                int r = (nums[i] + nums[i+1])%10;
                temp.push_back(r);
            }
            return temp;
        }
    };