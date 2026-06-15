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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> re;
        if(root==NULL) return re;
        stack<TreeNode*> St;
        TreeNode* curr=root;
        while(true)
        {
            if(curr!=NULL)
            {
                St.push(curr);
                curr=curr->left;
            }
            else{
                if(St.empty())
                {
                    break;
                }
                curr=St.top();
                St.pop();
                re.push_back(curr->val);
                curr=curr->right;
            }
        }
        return re;
    }
};