class Solution {
public: 
//    bool check(string s)
//    {
//        string a=s;
//        reverse(a.begin(),a.end());
//        if (a==s)return true;
//        else return false;
//    }

  int count(string s, int i,int j)
  {  int count=0;
     while(i>=0 && j<s.size() && s[i]==s[j])
     {
        count++;
        i--;
        j++;
     }
     return count;
  }
    int countSubstrings(string s) {
        int c=0;
       
        for (int i=0;i<s.size();++i)
        {  
            int odd=count(s,i,i);
          int even=count(s,i,i+1);
           
           c+=odd+even;
          
        }

        return c;
    }
};


//   for (int i=0;i<s.size();++i)
//         {   
//             string temp="";
//             temp+=s[i];
//             if (check(temp))count++;
        
//           for ( int j=i+1;j<s.size();++j)
//           {
//             temp+=s[j];
//             if (check(temp))count++;
//           }
//            temp="";
//         }