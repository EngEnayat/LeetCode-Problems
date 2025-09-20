class NumArray {
    public:
        NumArray(vector<int>& nums) 
        {
            prefix.push_back(nums[0]);
            for(int i = 0; i< nums.size() -1; i++)
            {
                int j = prefix[i] + nums[i +1];
                prefix.push_back(j);
            }
        }
        
        int sumRange(int left, int right) {
            if(left > right) return 0;
            if(left == 0) return prefix[right];
            return prefix[right] - prefix[left -1];
        }
    
    private:
        vector<int> prefix;
};
    
    /**
     * Your NumArray object will be instantiated and called as such:
     * NumArray* obj = new NumArray(nums);
     * int param_1 = obj->sumRange(left,right);
     */