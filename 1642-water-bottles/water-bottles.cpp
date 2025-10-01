class Solution {
public:
    int numWaterBottles(int B, int E) {
      int ans=B;
        while (B/E!=0)
        {
            int n=B/E;
            int rem=B%E;
            ans+=n ;
            B=n +rem;
        }

        return ans;
    }
};