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
     void inorder(TreeNode* root,vector<int> &a)
     {
        if (!root)return ;
        inorder(root->left,a);
        a.push_back(root->val);
        inorder(root->right,a);
     }
    int minDiffInBST(TreeNode* root) {
        vector <int> ans ;
        inorder(root,ans);
        int mn=INT_MAX;
        for (int i=0;i<ans.size()-1;++i)
        {
            mn=min(mn,ans[i+1]-ans[i]);
        }
        return mn;
    }
};