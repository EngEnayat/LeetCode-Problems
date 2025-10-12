class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            if(nums.size() < 1) return 0;
            int i =0, j =0;
            while(i < nums.size() && j< nums.size())
            {
                if(nums[j] != val) {nums[i] = nums[j];i++; j++;}
                else j++;
            }
            return i;
        }
    };