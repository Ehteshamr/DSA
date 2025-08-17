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
   // count valid path from a given node(fixing source pointer at ) 
    void source(TreeNode* root,int &target,long long sum,int &count)
    {
        if (!root)return ;
        sum+=root->val;
        if(sum==target)count++;
        if (!root->left && !root->right)return ;
        source(root->left,target,sum,count);
        source(root->right,target,sum,count);

    }
    int pathSum(TreeNode* root, int targetSum) {
        // starting source at root then go left right and make them source 
        if (!root)return 0;
        long long  sum=0;int count=0;
        source(root,targetSum,sum,count);
        
       int left= pathSum(root->left,targetSum);
      int right=  pathSum(root->right,targetSum);

        return count+left+right;
        
    }
};