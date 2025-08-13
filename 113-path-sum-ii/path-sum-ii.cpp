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
    void traverse(TreeNode* root,int t,vector<vector<int>> &ans,vector<int> &path,int &sum)
    {  if (!root) return ;
        sum+=root->val;
        path.push_back(root->val);
        if(!root->left && !root->right)
        {if (sum==t)
         {ans.push_back(path);}
          path.pop_back();
          sum-=root->val;
          return ;
        }
        traverse(root->left,t,ans,path,sum);
        traverse(root->right,t,ans,path,sum);
          path.pop_back();
          sum-=root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;vector<int> path;
        int sum=0;
        traverse(root,targetSum,ans,path,sum);
        return ans;
    }
};