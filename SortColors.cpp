class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int one,two,three;
            one = two = three = 0;
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i] == 0) one++;
                else if(nums[i] == 1) two++;
                else three++;
            }
            int i =0;
            for(i; i<one; i++) nums[i] = 0;
            int start = i;
            for(i ; i< two + start ; i++) nums[i] = 1;
            start = i;
            for(i; i< three + start; i++) nums[i] = 2;
        }
    };