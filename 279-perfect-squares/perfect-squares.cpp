class Solution {
public:
    const int INF = 1e9;
    vector<vector<int>> dp;
    long long solve(int i,vector<int> &v,int n)
    {  if (n==0)return 0;
        if (i>=v.size())return INF;
        if(dp[i][n]!=-1)return dp[i][n];
        // take 
        int take=INF;
        if(v[i]<=n){take=1+solve(i,v,n-v[i]);}
        int skip=0+solve(i+1,v,n);

        return dp[i][n]=min(take,skip);

    }
    int numSquares(int n) {
        vector<int> v;
        for (int i=1;i*i<=n;++i)
        {
           v.push_back(i*i);
        }
      //  vector<int> dp(n+1,-1);
        dp.assign(v.size(), vector<int>(n + 1, -1));

        return solve(0,v,n);
        
    }
};