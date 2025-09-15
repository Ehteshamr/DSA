class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
         string s="";int count=0;
        for (int i=0;i<text.size();++i)
        {  if(text[i]!=' ')  s+=text[i];
             bool present=false;
           if(text[i]==' ' || i==text.size()-1)
           {
             for (char c:brokenLetters)
             {
              if (s.find(c)!=string::npos)
              {
                present=true;
                break;
              }
             }
             if(present==false)count++;
            s="";
           }
         
        }

        return count;
    }
};