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
    TreeNode * minval(TreeNode* root)
    { // in bst minval is at the leftmost node
        if (!root)return root;
        if (root->left==NULL)
        {
            return root ;
        }

        return minval(root->left);

    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)return root;

        if (root->val==key)
        {
         // 0 child 
         if (!root->left && !root->right)
         {
            delete root;
            return NULL;
         }
         // 1 child child 
         else if (root->left!=NULL && !root->right)
         {
             TreeNode* temp=root->left;
             delete root;
             return temp;
         }
         else if (root->right!=NULL && !root->left)
         {
             TreeNode* temp=root->right;
             delete root;
             return temp;
         }

         // 2 child child
        else  if (root->left!=NULL && root->right!=NULL)
         {
            // right subt ka minimum ko root bna denge 
        //    TreeNode * temp =root;
        //     root= minval(root->right);
        //     root->right=deleteNode(root->right,root->val);
        //     root->left=temp->left;
        //     return root;
         int min=minval(root->right)->val;
         root->val=min;
         root->right=deleteNode(root->right,min);
         return root;
         } 
                    
        }

        else if (root->val>key)
        {
            //go left 
            root->left=deleteNode(root->left,key);
            return root;
        }
         else if (root->val<key)
        {
            //go right  
            root->right=deleteNode(root->right,key);
            return root;
        }
        return root;
    }
};