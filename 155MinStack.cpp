class MinStack {
public:
stack<int> s1;
stack<int> s2;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s1.empty()){
            s1.push(val);
            s2.push(val);
            mini=val;
        }else{
            if(val>s2.top()){
                 s1.push(val);
            s2.push(s2.top()); 
            }else{
                s1.push(val);
                s2.push(val);
            }
        }

    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
     return s1.top();   
    }
    
    int getMin() {
        return s2.top();
    }
};
