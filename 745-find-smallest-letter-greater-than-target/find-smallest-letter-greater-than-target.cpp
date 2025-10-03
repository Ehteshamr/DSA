class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        int n=l.size();
        int s=0,e=n-1;
        char ans=l[0];
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if (l[mid]>t)
            {
                ans=l[mid];
                e=mid-1;
            }
            else if (l[mid]<=t)
            {
                s=mid+1;
            }
        }

        return ans;
    }
};