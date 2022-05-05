class MyStack {
public:
    queue<int>q1;
    MyStack() {
        // q1.clear();
    }
    
    void push(int x) {
        queue<int>q;
        if(q1.empty()==true)
        {
            q1.push(x);
        }    
        else{
            while(q1.empty()==false){
                q.push(q1.front());
                q1.pop();
            }
            q1.push(x);
            while(q.empty()==false){
                q1.push(q.front());
                q.pop();
            }
        }
    }
    
    int pop() {
        int k=q1.front();
        q1.pop();
        return k;
    }
    
    int top() {
        int k=q1.front();
        return k;
    }
    
    bool empty() {
        return q1.empty();
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