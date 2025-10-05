class Solution {
public:
    int arrangeCoins(int n) {
        int l=1,h=n;
        int ans=-1;
        while(l<=h)
        { 
            long long  m=l+(h-l)/2;
            long long sum=m*(m+1)/2;
            if (sum<=n)
            {
               ans=m;
               // aur right me dekho possible h ki nhi
               l=m+1;
            }
            else if (sum>n)
            {
                h=m-1;
            }
        }
        return ans ;
    }
};