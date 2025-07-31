class MinStack {
    public:
        MinStack() {
            
        }
        
        void push(int val) {
           s.push(val);
           if(minStack.empty()) minStack.push(val);
           else
           {
            if(minStack.top() >= val) minStack.push(val);
           }
          
        }
        
        void pop() {
            if(s.empty()) return;
            if(minStack.top() == s.top()) minStack.pop();
            s.pop();
        }
        
        int top() {
            return s.top();
        }
        
        int getMin() {
        return minStack.top();
        }
    private:
    
        stack <int> s;
        stack<int> minStack;
    };
    
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */