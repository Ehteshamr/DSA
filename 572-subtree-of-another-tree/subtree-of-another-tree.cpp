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
     void preorder(TreeNode* root,vector<string> & a)
     {
        if (!root){a.push_back("#");return ;}
        a.push_back(to_string(root->val));
        preorder(root->left,a);
        preorder(root->right,a);

     }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector <string> a;
        vector <string> b;
        preorder(root,a);
        preorder(subRoot,b);

        auto it=search(a.begin(),a.end(),b.begin(),b.end());
        if (it!=a.end())
        {
            return true;
        }
        else return false;
    }
};