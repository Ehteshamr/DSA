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


 // 0 child 
        //    if (root->left!=NULL && root->right!=NULL)
        //    {
        //        delete root;
        //        return NULL;
        //    }
        //   // 1 child 
        //  else if (root->left!=NULL && root->right==NULL)
        //  {
        //     TreeNode* temp=root->left;
        //     delete root;
        //     return temp;
        //  }
        //  else if (root->right!=NULL && root->left==NULL)
        //  {
        //     TreeNode* temp=root->right;
        //     delete root;
        //     return temp;
        //  }

        //  // 2 child 
        //  else if (root->right && root->left)
        //  {   // convention - right subtree ka minimum value ko root bna denge 
        //     int min =minval(root->right);
        //     root->
        //  }


class Solution {
public:

    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (!root)return NULL;
      if (root->val<low ){return trimBST(root->right,low,high);}
      if (root->val>high ){return trimBST(root->left,low,high);}


        root->left=trimBST(root->left,low ,high);
        root->right=trimBST(root->right,low ,high);
        return root ;
    }
};