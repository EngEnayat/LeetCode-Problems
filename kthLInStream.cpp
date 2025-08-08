class KthLargest {
    public:
        KthLargest(int k1, vector<int>& nums) {
            k = k1;
            for(int i: nums)
            {
                add(i);
            }
        }
        
        int add(int val) {
            pq.push(val);
            if(k < pq.size())
                pq.pop();
            return pq.top();
    
        }
    private:
        std::priority_queue<int, vector<int> , greater<int>> pq;
        int k;
    };
    
    /**
     * Your KthLargest object will be instantiated and called as such:
     * KthLargest* obj = new KthLargest(k, nums);
     * int param_1 = obj->add(val);
     */