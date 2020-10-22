class Solution {
public:
    string reverseVowels(string s) {
        string t;
        for(auto k:s)
        {
            if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u'||k=='A'||k=='E'||k=='I'||k=='O'||k=='U')
                t+=k;
        }
        int l=0,r=t.size()-1;
        while(l<r)
        {
            char p=t[l];
            t[l]=t[r];
            t[r]=p;
            l+=1;
            r-=1;
        }
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                s[i]=t[j];
                j+=1;
            }
        }
        return s;
    }
};
