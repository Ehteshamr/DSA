class Solution {
public:
    int minimumArea(vector<vector<int>>& g) {
        int mc=INT_MAX,mr=INT_MAX,mac=INT_MIN,mar=INT_MIN;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
               if(g[i][j]==1){
                 mc=min(mc,j);
                 mr=min(mr,i);
                 mac=max(mac,j);
                 mar=max(mar,i);
               }

            }
        }
        return (mac-mc+1)*(mar-mr+1);
        
    }
};