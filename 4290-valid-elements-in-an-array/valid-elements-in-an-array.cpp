class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans;
        if (n<=1)return nums;
        ans.push_back(nums[0]);
        for (int i=1;i<n-1;++i)
        {
            int lv=1,rv=1;
            for (int j=0;j<i;j++)
            {
                if (nums[j]>=nums[i])lv=0;
            }
            for (int k=i+1;k<n;k++)
            {
                if (nums[k]>=nums[i])rv=0;
            }
            if (lv|| rv) ans.push_back(nums[i]);
            else continue;
        }

        ans.push_back(nums[n-1]);
        return ans ;
    }
};