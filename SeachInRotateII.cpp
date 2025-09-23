class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            int pivot = 0;
            for(int i=1; i<nums.size(); i++)
            {
                if(nums[i] < nums[i-1]) {pivot = i; break;}
            }
            int mid;
            auto search = [&](int left, int right)
            {
                while(left <= right)
                {
                    mid = (right + left)/2;
                    if(nums[mid] == target) return true;
                    if(nums[mid] > target) right = mid-1;
                    else left = mid+1;
                }
                return false;
            };
            return (search(0, pivot-1) || search(pivot, nums.size()-1) );
        }
    };