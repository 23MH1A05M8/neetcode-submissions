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
    int depth(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lh=depth(root->left);
        int rh=depth(root->right);
        if(abs(lh-rh)>1)
        {
            ans=false;
        }
        return 1+max(lh,rh);
    } 
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        depth(root);
        if(ans==false)
        {
            return false;
        }
        else{
            return true;
        }
    }
};
