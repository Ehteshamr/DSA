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
    //  void inorder(TreeNode* root,vector<int> &a)
    //  {
    //    if (!root)return;

    //    inorder(root->left,a);
    //    a.push_back(root->val);
    //    inorder(root->right,a);
    //  }

    bool check(TreeNode* root,long long min,long long max)
    {  if (!root)return true;

        if (root->val<=min || root->val>=max)return false;
        bool left=check(root->left,min,root->val);
        bool right=check(root->right,root->val,max);
        return (left) && (right);

    }

    bool isValidBST(TreeNode* root) {
        // vector <int> ans;
        // inorder(root,ans);
        // if (ans.size()<=1)return true;
        // // no repetition 
        // unordered_map<int,int> m ;
        // for ( int x:ans)
        // {
        //     m[x]++;
        // }
        // for (auto it:m)
        // {
        //     if (it.second>1)return false;
        // }
        // if (ans[0]==ans[ans.size()-1])return false;
        // vector<int> temp=ans;

        // sort(temp.begin(),temp.end());
        // if (temp==ans)return true ;
        // else return false;

        return check(root,LLONG_MIN,LLONG_MAX);
    }
};