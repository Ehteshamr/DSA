class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro=INT_MIN;
        for ( int i=0;i<nums.size();i++)
        {
            int curr=nums[i];
             pro=max(pro,curr);
            for (int j=i+1;j<nums.size();j++)
            {
                curr=curr*nums[j];
                pro=max(pro,curr);
            }
           
        }
        return pro;
    }
};