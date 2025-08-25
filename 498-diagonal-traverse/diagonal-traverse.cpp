class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
       
        int m=mat.size();
        int n=mat[0].size();
         vector <vector <int> > a(m+n-1) ;
        for (int i=0;i<m;++i)
        {
            for (int j=0;j<n;++j)
            {
                a[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> final;
        for ( int i=0;i<a.size();++i)
        {
            if (i%2==0)
            {
                reverse(a[i].begin(),a[i].end());
                for (int x:a[i])
                {
                   final.push_back(x);
                }
            }
            else 
            {
                for (int x:a[i])
                {
                   final.push_back(x);
                } 
            }
        }
        return final;
        
    }
};