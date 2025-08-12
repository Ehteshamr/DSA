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
    void solve (TreeNode* root,int lvl,vector <int> &ans)
    { 
     if (!root) return ;
    if (lvl==ans.size())
    {
        ans.push_back(root->val);
    }
     // go the right
     solve(root->right,lvl+1,ans);       
     solve(root->left,lvl+1,ans);   

       
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
         solve(root,0,ans);
         return ans;
    }
};


//BFS Approach:

// vector <int > bfs (TreeNode* root)
//     { 
//          vector <int > ans ;
//       if(!root)return {};
//         queue<TreeNode*> c;
//         c.push(root);
//         while(!c.empty())
//         {
//             int n=c.size();
//             vector<int> lvl;
//             for (int i=0;i<n;++i)
//             {   
//                TreeNode* node=c.front();
//                c.pop();
//                lvl.push_back(node->val);
//                if (node->left!=NULL)c.push(node->left);
//                if (node->right!=NULL)c.push(node->right);
//             }
//              ans.push_back(lvl[lvl.size()-1]);
//         }
//        return ans ;
//     }