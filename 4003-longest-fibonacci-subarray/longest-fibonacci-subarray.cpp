class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        if (n<3)return n;
        int ml=INT_MIN,cl=2;

        for (int i=2;i<n;++i)
        {
            if (nums[i]==nums[i-1]+nums[i-2])
            {  cl++;
               ml=max(ml,cl);

            }
            else 
            {
               cl=2;
            }
        }
        if (ml==INT_MIN)return 2;
        return ml;
    }
};