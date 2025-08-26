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
     TreeNode* construct(vector<int>& pre,vector<int>& in,int ps,int is,int ie)
     { 
        if (is>ie)return NULL;
        TreeNode* root=new TreeNode(pre[ps]);
        int j=is;
        while(in[j]!=pre[ps])
        {
            j++;
        }
        int n=j-is;

       root->left= construct(pre,in,ps+1,is,j-1);
       root->right= construct( pre, in,ps+n+1, j+1,ie);
       return root;

     }
   
    TreeNode* bstFromPreorder(vector<int>& pre) {
        vector <int> in=pre;
        sort(in.begin(),in.end());
        return construct (pre,in,0,0,in.size()-1);
        
    }
};