class MinStack {
        stack<int> st;
        stack<int> minst;
      
public:
    MinStack() {

   
        
    }
    
    void push(int val) {
        st.push(val);
       int minimum = minst.empty()?val: min(val,minst.top());
        minst.push(minimum);

    
        
    }
    
    void pop() {

        st.pop();
        minst.pop();
      
    }
    
    int top() {

       return st.top();
        
    }
    
    int getMin() {

       return minst.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */