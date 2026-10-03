class MyStack {
public:
    queue<int>q1;
    queue<int>q2 ;
    MyStack() {
        
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
    void push(int x) {
        if(empty()) q1.push(x);   
        else if(q1.empty()) q2.push(x);
        else q1.push(x);
    }
    
    int pop() {
        if(empty()) return 0;
        else if(q1.empty()){
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            int el = q2.front();
            q2.pop();
            return el;
        }
        else{
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            int el = q1.front();
            q1.pop();
            return el;
        }
    }
    
    int top() {
        if (empty()) return 0;

        if (!q1.empty()) {
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }

            int el = q1.front();
            q1.pop();
            q2.push(el);

            return el;
        }

        while (q2.size() > 1) {
            q1.push(q2.front());
            q2.pop();
        }

        int el = q2.front();
        q2.pop();
        q1.push(el);

        return el;

}
    
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */