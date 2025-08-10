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
     
     bool bfs(TreeNode* root,int x,int y)
     {  int lx,ly;
       queue<TreeNode* > c;
       c.push(root);
       int lvl=0;
       while(!c.empty())
       {
        int n=c.size();
        
        for (int i=0;i<n;++i)
        {
            TreeNode* node=c.front(); 
            c.pop();
            if (node->left && node->right)
            {if (node->left->val==x && node->right->val==y)return false;
            if (node->left->val==y && node->right->val==x)return false;
            }

            if (node->val==x)lx=lvl;
            if (node->val==y)ly=lvl;
            if (node->left!=NULL)c.push(node->left);
            if (node->right!=NULL)c.push(node->right);

        }
        lvl++;

       }
       if (lx==ly)return true;
       else return false;
      

     }
    bool isCousins(TreeNode* root, int x, int y) {
        return bfs(root,x,y);
    }
};