class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        vector<int> pre(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            pre[i]=nums[i]^pre[i-1];
        }

        if (pre[nums.size()-1]==0)
        {
            sort(nums.begin(),nums.end());
            if(nums[0]==0 && nums[nums.size()-1]==0)
            {
                return 0;
            }
            else return nums.size()-1;
        }
        else return nums.size();
    }
};