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
     void help(TreeNode* root,vector<string> &ans,string s)
    {   if (!root)return ;
        string k=to_string(root->val);
        s+=k;
        if (!root->left && !root->right) // leaf
        {   //s+=("->"+k);
         // s+=k;
            ans.push_back(s);
            // s.pop_back();
            return ;
        }
       
        help(root->left,ans,s+"->");
        help(root->right,ans,s+"->");
        // s.pop_back();

    }
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> ans ; string s="";
       help(root,ans,s);
       return ans;

         
    }
};