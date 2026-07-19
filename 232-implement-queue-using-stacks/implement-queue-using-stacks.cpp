#include <stack>
using namespace std;

class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> s1, s2;
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if (this->empty()) return -1;
        
        // FIX: If s2 is NOT empty, take directly from s2
        if (s2.empty() == 0) { 
            int n = s2.top();
            s2.pop();
            return n;
        }
        // If s2 IS empty, dump s1 into s2 first
        else {
            while (s1.size()) {
                s2.push(s1.top());
                s1.pop();
            }
            int m = s2.top();
            s2.pop();
            return m;
        }
    }
    
    int peek() {
        if (this->empty()) return -1;
        
        // FIX: Match the logic from pop. If s2 is NOT empty, peek s2.
        if (s2.empty() == 0) {
            return s2.top();
        }
        else {
            while (s1.size()) {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
    
    bool empty() {
        return (s1.empty() && s2.empty());
    }
};
