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
     TreeNode* solve(int ps,int postend,int instart,int inend,unordered_map<int,int> &mp,vector<int>& inorder, vector<int>& postorder)
     {   if (ps> postend || instart > inend) return NULL;
         TreeNode* root=new TreeNode(postorder[postend]);
        // if (instart == inend) return root;
        
       int  j=mp[postorder[postend]];
       // int rem_right=inend-j;// not necessary
        int rem_left=j-instart;

        root->left=solve(ps,ps+rem_left-1,instart,j-1,mp,inorder,postorder);
        root->right=solve(ps+rem_left,postend-1,j+1,inend,mp,inorder,postorder);
        return root;
     }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        int n=inorder.size();
        for (int i=0;i<n;++i)
        {
            mp[inorder[i]]=i;
        }

        return solve(0,n-1,0,n-1,mp,inorder, postorder);
        
    }
};