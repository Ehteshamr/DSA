class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
      int start=0, maxL=0;
      for( int i=0;i<n;++i)
      {
        //0dd palin
         int l=i,r=i;
         while (l>=0 && r<n && s[l]==s[r])
         {
            if (r-l+1>maxL){start=l; maxL=r-l+1;}
            l--; r++;
         }

          l=i;r=i+1;
         while (l>=0 && r<n && s[l]==s[r])
         {
            if (r-l+1>maxL){start=l; maxL=r-l+1;}
            l--; r++;
         }
      }
        string ans=s.substr(start,maxL);
        return ans;
    }
};