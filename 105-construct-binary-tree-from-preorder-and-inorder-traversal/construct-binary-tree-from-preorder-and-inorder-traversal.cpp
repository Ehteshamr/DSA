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
    TreeNode * solve(int ps,int pe,int is,int ie,unordered_map<int,int> &mp,vector<int>& preorder, vector<int>& inorder)
    {
        if (ps>pe || is>ie)return NULL;
         TreeNode * root= new  TreeNode (preorder[ps]);
         int j=mp[preorder[ps]];
         int rem_left=j-is;

         root->left=solve(ps+1,ps+rem_left,is,j-1,mp,preorder,inorder);
         root->right=solve(ps+rem_left+1,pe,j+1,ie,mp,preorder,inorder);

         return root;
    }
     
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         int n =inorder.size();
        unordered_map<int,int> mp;
        for ( int i=0;i<n;++i)
        {
            mp[inorder[i]]=i;
        }

      return solve(0,n-1,0,n-1,mp,preorder,inorder);
        
    }
};