class Solution {
public:
    bool detectCapitalUse(string word) {
            int flag=0;
          if(word[0]>=65&&word[0]<=90)
          {
                if(word[1]>=65&&word[1]<=90)
                {
                    for(int i=2;i<word.size();i++)
                    {
                        if(!(word[i]>=65&&word[i]<=90))
                        {
                            flag=1;
                            break;
                        }
                    }
                }
              else
              {
                  for(int i=2;i<word.size();i++)
                    {
                        if(word[i]>=65&&word[i]<=90)
                        {
                            flag=1;
                            break;
                        }
                    }
              }
          }
        else
        {
            for(int i=1;i<word.size();i++)
            {
                 if(word[i]>=65&&word[i]<=90)
                        {
                            flag=1;
                            break;
                        }
            }
        }
        if(flag)
            return false;
        return true;
    }
};
