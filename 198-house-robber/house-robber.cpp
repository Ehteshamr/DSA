class Solution {
public:
    int solve (int i,vector<int>& nums,vector <int> &dp)
    {
        if (i>=nums.size())return 0;
        if (dp[i]!=-1)return dp[i];
     //take 
        int rob=nums[i]+solve(i+2,nums,dp);
    // skip 
         int skip=solve(i+1,nums,dp);
        return dp[i]=max(rob,skip) ;
    }
    int rob(vector<int>& nums) {
        vector <int> dp(101,-1);
      return   solve(0,nums,dp);
     //   int one=solve(1,nums,dp);
    

    }
};