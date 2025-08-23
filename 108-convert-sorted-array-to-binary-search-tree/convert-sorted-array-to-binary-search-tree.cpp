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
    TreeNode* sorted(vector<int> &a,int start,int end)
    {   
           if (start>end){return NULL;}
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(a[mid]);

     
        root->left=sorted(a,start,mid-1);
        root->right=sorted(a,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return sorted(nums,0,nums.size()-1);
    }
};