class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int i=0;
        while(s[i]!='6' && i<s.size())
        {
           i++;
        }
        if (i==s.size())return stoi(s);
        s[i]='9';
        int ans=stoi(s);
        return ans;
    }
};