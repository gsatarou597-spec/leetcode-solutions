/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        stack<TreeNode*>st;
        TreeNode* curr=root;
        while(curr!=nullptr || !st.empty()){
            while(curr!=nullptr){
                result.push_back(curr->val);
                st.push(curr);
                curr=curr->right;
            }
            curr=st.top();
            st.pop();
            curr=curr->left;
        }
        reverse(result.begin(),result.end());
        return result;        
    }
};