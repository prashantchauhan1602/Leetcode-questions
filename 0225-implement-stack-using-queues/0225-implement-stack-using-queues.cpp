class MyStack {
public:
    queue<int> qs1 ;
    queue<int> qs2 ;
    MyStack() {
        
    }
    
    void push(int x) {
        qs2.push(x) ;
        while(!qs1.empty())
        {
            qs2.push(qs1.front()) ;
            qs1.pop();
        }
        swap(qs1 , qs2) ;
    }
    
    int pop() {
        int val = qs1.front() ;
        qs1.pop();
        return val;
    }
    
    int top() {
        return qs1.front() ;
    }
    
    bool empty() {
        return qs1.empty() ;
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