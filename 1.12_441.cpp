class Solution {
public:
    int arrangeCoins(int n) {
        int cnt=0,i=1;
        while(n>=i)
        {
            cnt+=1;
            n-=i;
            i+=1;
        }
        return cnt;
    }
};
