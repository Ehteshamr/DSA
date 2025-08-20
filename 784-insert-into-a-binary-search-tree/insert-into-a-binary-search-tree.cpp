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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
     
        if (!root)return  new TreeNode(val);;
        // if ((root->val<val && root->right->val>val) || (root->val<val && !root->right))
        // {
        //     TreeNode * temp=root->right;
        //     root->right=node;
        //     node->right=temp;
        //     return root;
        // }
        // else if ((root->val>val && root->left->val<val) || (root->val>val && !root->left))
        // {
        //     TreeNode * temp=root->left;
        //     root->left=node;
        //     node->left=temp;
        //     return root;
        // }
        // insertIntoBST(root->left,val);
        // insertIntoBST(root->right,val);
     TreeNode * curr=root;
     while(true)
     {
        if (curr->val<val)
        {
            if (curr->right!=NULL)curr=curr->right;
            else  // curr->right is NUll 
            {
                TreeNode* node=new  TreeNode(val);
                curr->right=node;
                break;

            }
           
        }

         else if (curr->val>val) // go left
            {  if (curr->left!=NULL)curr=curr->left;
              else 
              {
                 TreeNode* node=new  TreeNode(val);
                curr->left=node;
                break;
              }

            }
     }

     return root;
       

    }
};