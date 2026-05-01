class Solution {
public:
    int countSubstrings(string s) {
        // expand around center method 
        int n=s.size();int count=0;
        for ( int i=0;i<n;++i)
        {
            // odd length 
            int l=i,r=i;
            while (l>=0 && r<n && s[l]==s[r])
            {
               count++;
               l--; r++;
            }
  
   // even length
            l=i;r=i+1;
            while (l>=0 && r<n && s[l]==s[r])
            {
               count++;
               l--; r++;
            }
        }
        return count;
    }
};