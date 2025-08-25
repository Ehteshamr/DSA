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
     void traverse(TreeNode* root,unordered_map<int,int> &m)
     {  if (!root)return ;
        m[root->val]++;
        traverse(root->left,m);
      traverse(root->right,m);

     }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int ,int> m;
        traverse(root,m);
        // stores pairs in vector 
         vector<pair<int,int>> v(m.begin(),m.end());
         // descending order on the basis of fre using lambda comparator
         sort(v.begin(),v.end(),
         [](pair<int,int> &a,pair<int,int> &b)
         {
            return a.second>b.second;
         } );

         vector<int> ans;
         int maxf=v[0].second;
         
        //  while(i<v.size()-1  && (v[i].second==v[i+1].second) )
        //  {
        //     ans.push_back(v[i].first);
        //     i++;
        //  }
        for ( int i=0;i<v.size();++i)
        {
            if (v[i].second==maxf)
            {
                ans.push_back(v[i].first);
            }
            else break;
        }

         return ans;

    }
};