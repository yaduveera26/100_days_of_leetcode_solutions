class Solution {
public:
    int findComplement(int num) {
        int n=0,cnt=0;
        while(num>0)
        {
            if(num%2==0)
                n+=(1<<cnt);
            num/=2;
            cnt+=1;
        }
        return n;
    }
};
