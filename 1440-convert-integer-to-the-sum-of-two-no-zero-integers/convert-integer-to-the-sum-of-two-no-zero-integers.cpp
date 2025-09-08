class Solution {
public:
     bool check(int n)
     {
        while(n>0)
        {
            int r=n%10;
            if (r==0)return false;
            n/=10;
        }
        return true;
     }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for (int i=1;i<n;++i)
        {    
            if (check(i) && check(n-i))
            {
               ans={i,n-i};
               break;
            }
        }
        return ans;
    }
};