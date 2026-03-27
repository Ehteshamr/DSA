class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size();
         int m=mat[0].size();
        k=k%m;// for laarge k 
        vector<vector<int>> temp=mat;
        for ( int i=0;i<n;i++)
        {
            if (i &1)
            {
                // right rotate piche ke elements ko age bhejo
                rotate(mat[i].begin(),mat[i].end()-k,mat[i].end());
            }
            else 
            {
                 rotate(mat[i].begin(),mat[i].begin()+k,mat[i].end());
            }
        }
        if (temp==mat)return 1;
        else return 0;
    }
};