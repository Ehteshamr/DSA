class Solution {
public:
     unordered_map <char,int> fre(int n)
     {  unordered_map<char,int> mp;
        string s=to_string(n);
        for (char c: s)
        {
          mp[c]++;
        }
        return mp;
     }
    bool reorderedPowerOf2(int n) {
         // stores all powers
         vector<unordered_map<char,int>> pl; // power list
         for ( int i=0;i<30;++i)
         {  int power=1<<i;
            pl.push_back(fre(power));
         } 
          
          unordered_map <char,int> num= fre(n);

          for (int i=0;i<pl.size();++i)
          {
            if (num==pl[i])return true;
          }
         return false;
    }
};