class MyQueue {
    public:
        MyQueue() {
            
        }
        
        void push(int x) {
            f_stack.push(x);
        }
        
        int pop() 
        {
            if(s_stack.empty())
            {
            
            while(!f_stack.empty()){
                s_stack.push(f_stack.top());
                f_stack.pop();
            }
            int top = s_stack.top();
            s_stack.pop();
            while(!s_stack.empty()){
                f_stack.push(s_stack.top());
                s_stack.pop();
            }
            return top;
            }
        }
        
        int peek() {
            while(!f_stack.empty())
            {
                s_stack.push(f_stack.top());
                f_stack.pop();
            }
            int top = s_stack.top();
            while(!s_stack.empty())
            {
                f_stack.push(s_stack.top());
                s_stack.pop();
            }
            return top;
        }
        
        bool empty() {
            return f_stack.empty();
        }
    private:
        stack<int> f_stack; // first stack
        stack<int> s_stack; // second stack
    };
    
    /**
     * Your MyQueue object will be instantiated and called as such:
     * MyQueue* obj = new MyQueue();
     * obj->push(x);
     * int param_2 = obj->pop();
     * int param_3 = obj->peek();
     * bool param_4 = obj->empty();
     */