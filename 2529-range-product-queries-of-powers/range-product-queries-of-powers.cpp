#define mod 1000000007
class Solution {
public: 
long long  prod (int i,int j,vector <long long > &a)
{   long long  prod=1;
  if (i==j)return a[i];
    for (int k=i;k<=j;++k)
    {
        prod=(prod*a[k])%mod;
    }
    return prod;
    
}
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector <long long > powers;
        
        
        for (int i=0;i<31;++i)
        {  
            int a=1LL <<i;
           if (n & a) powers.push_back(a);
           
        }

    //     unordered_map<long long ,int> mp;
    //     mp[0]=-1;int start=-1;
    //     for (int j=0;j<prefix.size();++j)
    //     {
    //         long long need= prefix[j]-n;
    //         if (mp.find(need)!=mp.end())
    //         {
    //             int start=mp[need]+1;
    //             break;
    //         }
    //         mp[prefix[j]]=j;
    //     }
       
    //    if (start==-1 )return {};

    //     // now we got i->j range 
       vector <int> ans ;
      for (auto &c:queries)
      { 
        ans.push_back(prod(c[0],c[1],powers));

      }
        

        return ans ;
    }
};