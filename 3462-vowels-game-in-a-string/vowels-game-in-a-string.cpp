class Solution {
public:
    bool doesAliceWin(string s) {
        int vc=0;
        for (char c: s)
        {
             if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
             {
               vc++;
             }
        }

        if (vc==0)return false;
        else return true;
    }
};