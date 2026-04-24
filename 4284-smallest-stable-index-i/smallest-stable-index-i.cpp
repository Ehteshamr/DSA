class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx=INT_MIN;
        for ( int i=0;i<nums.size();i++)
        {
             mx=max(mx,nums[i]);
             int mn=INT_MAX;
             for (int j=i;j<nums.size();j++)
             {
                mn=min(mn,nums[j]);
             }
             int is=mx-mn;
             if (is<=k)return i;
             
        }
        return -1;
    }
};