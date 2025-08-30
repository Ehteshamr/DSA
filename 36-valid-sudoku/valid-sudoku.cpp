class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
         
         unordered_map<int,unordered_map<char,int>> m;
        for (int i=0;i<9;++i)
        {
            for (int j=0;j<9;++j)
            {
               int id=(i/3)*3+(j/3);
               if (b[i][j]=='.')continue;
               if (m[id].find(b[i][j])!=m[id].end())return false;
               m[id][b[i][j]]++;

            }
        }

     // rowwise check 
       unordered_map<char,int> m1;
        for (int i=0;i<9;++i)
        {
            for (int j=0;j<9;++j)
            {
                 if (b[i][j]=='.')continue;
                if (m1.find(b[i][j])!=m1.end())return false;
                m1[b[i][j]]++;
            }
            m1.clear();
        }
       

    // clumn wise check
        for (int i=0;i<9;++i)
        {
            for (int j=0;j<9;++j)
            { if (b[j][i]=='.')continue;
                if (m1.find(b[j][i])!=m1.end())return false;
                m1[b[j][i]]++;
            }
            m1.clear();
        }

        return true;
    }
};