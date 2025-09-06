class Solution {
public:
   int solve (int i,vector<int>& cost,vector<int> &dp)
   {
    if (i>=cost.size()){return 0;}
    if (dp[i]!=-1)return dp[i];

  int  onestep=cost[i]+solve(i+1,cost,dp);
  int  twostep=cost[i]+solve(i+2,cost,dp);

    return dp[i]=min(onestep,twostep);
   }
    int minCostClimbingStairs(vector<int>& cost) {
        // int c=0;int m1=0,m2=0;
        vector<int > dp(1001,-1);
        int zero= solve (0,cost,dp);
        int one = solve (1,cost,dp);
        return min(zero,one);
        
    }
};