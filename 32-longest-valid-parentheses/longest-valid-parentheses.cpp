class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // Base index for the first valid substring calculation
        int max_len = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i); // Store the index of the open parenthesis
            } else {
                st.pop(); // Pop the matching open parenthesis or base index
                if (st.empty()) {
                    st.push(i); // Push current index as a new base boundary
                } else {
                    max_len = max(max_len, i - st.top()); // Calculate current valid length
                }
            }
        }
        return max_len;
    }
};
