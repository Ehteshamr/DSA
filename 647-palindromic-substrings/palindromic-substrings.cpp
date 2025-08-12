class Solution {
public: 
   bool check(string s)
   {
       string a=s;
       reverse(a.begin(),a.end());
       if (a==s)return true;
       else return false;
   }
    int countSubstrings(string s) {
        int count=0;
        for (int i=0;i<s.size();++i)
        {   
            string temp="";
            temp+=s[i];
            if (check(temp))count++;
        
          for ( int j=i+1;j<s.size();++j)
          {
            temp+=s[j];
            if (check(temp))count++;
          }
           temp="";
        }

        return count;
    }
};