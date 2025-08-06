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
    {   if (!root)return 0;
         queue<TreeNode*> c;
         c.push(root);
          int level=1;
         while(!c.empty())
         {
            int n=c.size();
           
            while(n--)
            {     TreeNode* node=c.front();
            c.pop();
                  if (node->left==NULL && node->right==NULL) return level;
                if ( node->left!=NULL)c.push(node->left);
                if (node->right!=NULL)c.push(node->right);


            }

            level++;
           

         }
         return level;
    }
     
    int minDepth(TreeNode* root) {
       int ans=bfs(root);
       return ans;

        
    }
};