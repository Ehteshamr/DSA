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
     int minswap(vector<int> &a)
     {  int n=a.size();
      vector <int> vis(n,0);
      // with position store kr diya
      unordered_map<int,int> pos;
      for (int i=0;i<n;++i)
      {
        pos[a[i]]=i;
      }
      
      // now sort the aray 
      sort(a.begin(),a.end());
      int swap=0;
      // check for cycles 
      for (int i=0;i<n;++i)
      { int cycleSize=0;
        if (vis[i] || pos[a[i]]==i)continue;

        int j=i;
        while(!vis[j])
        {
            vis[j]=1;
            j=pos[a[j]]; // jump to the position where a[j] came from
            cycleSize++;
        }

        if (cycleSize>0)
        {
            swap+=(cycleSize-1);
        }
          
      }
      return swap;
     }

     int bfs(TreeNode* root)
     {  if (!root)return 0;
         int totalSwap=0;
        queue<TreeNode*> c;
        c.push(root);
        while (!c.empty())
        {
            int n=c.size();
            vector<int> lvl;
            for (int i=0;i<n;++i)
            {
                TreeNode* node=c.front();
                c.pop();
                lvl.push_back(node->val);
                if (node->left!=NULL)c.push(node->left);
                if (node->right!=NULL)c.push(node->right);

            }
            totalSwap+=minswap(lvl);

        }
        return totalSwap;
     }


    int minimumOperations(TreeNode* root) {

        return bfs(root);
    }
};