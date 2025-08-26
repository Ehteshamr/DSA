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
     void inorder(TreeNode* root,vector<int> &a)
     {
       if (!root)return;

       inorder(root->left,a);
       a.push_back(root->val);
       inorder(root->right,a);
     }
    bool isValidBST(TreeNode* root) {
        vector <int> ans;
        inorder(root,ans);
        if (ans.size()<=1)return true;
        // no repetition 
        unordered_map<int,int> m ;
        for ( int x:ans)
        {
            m[x]++;
        }
        for (auto it:m)
        {
            if (it.second>1)return false;
        }
        if (ans[0]==ans[ans.size()-1])return false;
        vector<int> temp=ans;

        sort(temp.begin(),temp.end());
        if (temp==ans)return true ;
        else return false;
    }
};