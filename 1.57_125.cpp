class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0)
            return true;
        string a,b;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                a+=(s[i]+32);
            else if(s[i]>='a'&&s[i]<='z')
                a+=s[i];
            else if(s[i]>='0'&&s[i]<='9')
                a+=s[i];
        }
        b=a;
        reverse(b.begin(),b.end());
        if(a.compare(b)==0)
            return true;
        return false;
    }
};
