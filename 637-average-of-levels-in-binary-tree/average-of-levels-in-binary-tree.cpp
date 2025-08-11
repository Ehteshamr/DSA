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
     vector<double > avg(TreeNode* root)
     { queue<TreeNode* > c ;
        c.push(root);
        vector <double> ans ;
        while (!c.empty())
        {
            int n=c.size();
            double sum=0;
            for (int i=0;i<n;++i)
            {
                TreeNode* node=c.front();
                c.pop();
               sum+=(node->val);
               if (node->left!=NULL)c.push(node->left);
               if (node->right!=NULL)c.push(node->right);

            }
          
          ans.push_back(sum/n);

        }
        return ans ;

     }
    vector<double> averageOfLevels(TreeNode* root) {
        return avg(root);
    }
};