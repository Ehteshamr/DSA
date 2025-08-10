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
    vector<vector<int>> bfs(TreeNode* root){
        if (!root)return {};
        vector <vector<int>> ans;
        queue<TreeNode* > c;
        c.push(root);
        while(!c.empty())
        {
            int n=c.size();
            vector<int> level;
            for (int i=0;i<n;++i)
            {   TreeNode* node=c.front();
                c.pop();
                level.push_back(node->val);
                if (node->left!=NULL) c.push(node->left);
                if (node->right!=NULL) c.push(node->right);

            }
            ans.push_back(level);
        }

        reverse(ans.begin(),ans.end());
        return ans ;

    }
    

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        return bfs(root);
    }
};