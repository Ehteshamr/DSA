// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // vector <int> a(n);
        // for (int i=1;i<=n;++i)
        // {
        //     a.push_back(i);
        // }
        int l=1,h=n;
        int first=-1;

        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if (isBadVersion(mid))
            {
                  first=mid;
                  h=mid-1; // left search space me check kro , kya koi aur better ans hai
            }
            else if (!isBadVersion(mid))
            {
                l=mid+1;
            }
            //  else if (isBadVersion(mid))
            // {
            //     h=mid-1;
            // }
        }
        
        return first ;

    }
};