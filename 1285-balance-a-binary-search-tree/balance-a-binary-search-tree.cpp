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
    void convert(TreeNode* root,vector<int> &a)
    { 
        if (!root)return ;
        convert(root->left,a);
        a.push_back(root->val);
        convert(root->right,a);
    }
    TreeNode* makeTree(vector<int> &a,int s,int e)
    {
        int mid=(s+e)/2;
        if (s>e)return NULL;
         TreeNode* root=new  TreeNode(a[mid]);
         root->left=makeTree(a,s,mid-1);
         root->right=makeTree(a,mid+1,e);
         return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector <int> a;
        convert(root,a);
        return makeTree(a,0,a.size()-1);
    }
};