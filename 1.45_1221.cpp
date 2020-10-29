class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0,b=0,i=0;
        do
        {
            if(s[i]=='R')
                b+=1;
            else
                b-=1;
            if(b==0)
                cnt+=1;
            i+=1;
        }while(i!=s.size());
        return cnt;
    }
};
