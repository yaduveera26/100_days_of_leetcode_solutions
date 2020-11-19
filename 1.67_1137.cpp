class Solution {
public:
    vector<int>dp;
    Solution(){
    for(int i=0;i<38;i++)
    {
        dp.push_back(-1);
    }
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    }
    int tribonacci(int n) {
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};
