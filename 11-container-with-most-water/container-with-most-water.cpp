class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size()-1;
        int l=0,r=n;
        int amt=INT_MIN;
        while(l<r)
        {
            int curr=(r-l)*min(h[l],h[r]);
            amt=max(curr,amt);
            if (h[l]<=h[r])
            {
                l++;
            }
            else if (h[l]>h[r])
            {
                r--;
            }
        }

        return amt;
    }
};