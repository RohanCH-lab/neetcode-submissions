class MinStack {
    stack<int>st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>newst = st;
        int ans = st.top();
        while(!newst.empty()){
            ans = min(ans,newst.top());
            newst.pop();
        }
        return ans;
    }
};
