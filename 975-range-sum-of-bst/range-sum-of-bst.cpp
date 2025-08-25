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
     int bfs(TreeNode* root,int low ,int high )
     {  if (!root)return 0;
         int sum=0;
        queue<TreeNode*> c;
        c.push(root);
        while(!c.empty())
        {
            int n=c.size();
            for (int i=0;i<n;++i)
            {  TreeNode* node=c.front();
              c.pop();
             if (node->val>=low && node->val<=high)
             {
                sum+=node->val;
             }
             if (node->left)c.push(node->left);
             if (node->right)c.push(node->right);

            }
        }
        return sum;

     }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return bfs(root,low ,high);
    }
};