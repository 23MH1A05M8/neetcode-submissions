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
    bool ans=true;
    int subheight(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lefth=subheight(root->left);
        int righth=subheight(root->right);
        if(abs(lefth-righth)>1)
        {
            ans=false;
        }
        return 1+max(lefth,righth);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        subheight(root);
        return ans;
    }
};
