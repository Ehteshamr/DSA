class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cr=0 ,cl=0,s=0;
        for(char c:moves)
        {
            if (c=='R')cr++;
            if (c=='L')cl++;
           if (c=='_')s++;

        } 
        return max(cr,cl)+s-min(cr,cl);
    }
};