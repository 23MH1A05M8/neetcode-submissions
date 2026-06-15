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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> res;
        if(root==NULL) return res;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* top_node=st.top();
            st.pop();
            res.push_back(top_node->val);
            if(top_node->right!=NULL)
                st.push(top_node->right);
            if(top_node->left!=NULL)
                st.push(top_node->left);
        }
        return res;
    }
};