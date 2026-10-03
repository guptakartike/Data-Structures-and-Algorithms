class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    MyQueue() {
    }

    bool empty() {
        return st1.empty() && st2.empty();    
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(empty()) return 0;
        if(!st2.empty()){
            int el = st2.top();
            st2.pop();
            return el;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int el = st2.top();
            st2.pop();
            return el;
        }
    }
    
    int peek() {
        if(empty()) return 0;
        if(!st2.empty()){
            return st2.top();
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top( );
        }
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */