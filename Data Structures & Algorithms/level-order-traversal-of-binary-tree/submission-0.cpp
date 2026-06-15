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

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* top_ele=q.front();
                q.pop();
                level.push_back(top_ele->val);
                if(top_ele->left!=NULL)
                {
                    q.push(top_ele->left);
                }
                if(top_ele->right!=NULL)
                {
                    q.push(top_ele->right);
                }
            }
            res.push_back(level);
        }
        return res;
    }
};
