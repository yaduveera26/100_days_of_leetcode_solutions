class Solution {
public:
    int countVowelStrings(int n) {
        int a=1,b=1,c=1,d=1,e=1;
        while(n>1)
        {
            a=(a+b+c+d+e);
            b=(b+c+d+e);
            c=(c+d+e);
            d=(d+e);
            n-=1;
        }
        a+=(b+c+d+e);
        return a;
    }
};
