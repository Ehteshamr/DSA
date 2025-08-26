class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
           int md=INT_MIN;
           int ma=INT_MIN;
        for (int i=0;i<n;++i)
        {  int l=dimensions[i][0];
          int b=dimensions[i][1];
          
          if ((l*l+b*b)>md)
          {
            md=(l*l+b*b);
            ma=l*b;
          }
         else if ((l*l+b*b)==md && l*b>=ma)
          {
            ma=l*b;
          }
        }
        return ma;
        
    }
};