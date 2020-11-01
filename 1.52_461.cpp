class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        int cnt=0;
        while(n>0)
        {
            if(n%2)
                cnt+=1;
            n/=2;
        }
        return cnt;
    }
};
