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
     bool bfs ( TreeNode* root)
     { queue<TreeNode* > c ;
       c.push(root);
      bool past=false;
       while(!c.empty())
       {
        int n=c.size();
        for ( int i=0;i<n;i++)
        {  TreeNode* node=c.front();
           c.pop();
           if (past && node!=NULL) return false;
          
           // check node has in right
          // if (node->left==NULL || node->right==NULL)return false;
          if (node!=NULL ) c.push(node->left);
          if(node!=NULL) c.push(node->right);
           if (!node)past=true;

        }

       }
       return true;

     }
    bool isCompleteTree(TreeNode* root) {
        // bool left=bfs(root->left);
        // bool right=bfs(root->right);

        // return (left && right);
        return bfs(root);
        
    }
};