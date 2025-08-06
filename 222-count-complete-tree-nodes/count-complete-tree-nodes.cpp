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
     int bfs(TreeNode* root)
     { // vector <vector<int>> ans ;
      int count=0;
        if (!root)return 0;
        queue<TreeNode* > c;
        c.push(root);
        while(!c.empty())
        {
           vector<int> level;
           int size=c.size();
           for (int i=0;i<size;++i)
           {
            TreeNode* node=c.front();
            c.pop();
            if (node->left!=NULL)c.push(node->left);
            if (node->right!=NULL)c.push(node->right);
            level.push_back(node->val);
           }
          // ans.push_back(level);
          count+=level.size();

        }
        return count;
     }
    int countNodes(TreeNode* root) {
        int ans=bfs(root);
        return ans;
        
    }
};