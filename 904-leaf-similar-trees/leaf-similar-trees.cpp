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
     void leaves(TreeNode* root,vector<int> &ans)
     {  
        if (!root)return ;
        if (!root->left && !root->right){ans.push_back(root->val);return ;}

        leaves(root->left,ans);
        leaves(root->right,ans);


     }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> a,b;
        leaves(root1,a);
        leaves(root2,b);

        if (a.size()!=b.size())return false;
       
        return a==b;
    }
};