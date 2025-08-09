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
    // bool bfs( TreeNode* p, TreeNode* q)
    // {   
    //     queue<TreeNode*> c1; c1.push(p);
    //  queue<TreeNode*> c2; c2.push(q);

    // while ( !c1.empty() && !c2.empty())
    // {
    //     int n=c1.size();

    //     if(c1.front()!=c2.front())return false;
    //     for(int i=0;i<n;++i)
    //     {  TreeNode* node1=c1.front(); c1.pop();
    //       TreeNode* node2=c2.front(); c2.pop();

    //     if (node1->left!=NULL)c1.push(node1->left);
    //     if (node1->right!=NULL)c1.push(node1->right);
    //     if (node2->left!=NULL)c2.push(node2->left);
    //     if (node2->right!=NULL)c2.push(node2->right);

    //     }
    // }
    // return true;

    // }

   


    bool isSameTree(TreeNode* p, TreeNode* q) {
      if(p==NULL && q==NULL) return true ;
      if (p==NULL || q==NULL) return false;

      if (p->val !=q->val)return false;

      // agr sab kuchh sahi hai to move krenge left anf right suntree pe 
      return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
    }
};