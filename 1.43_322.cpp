class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<long long int> >dp(coins.size()+1,vector<long long int>(amount+1));
        for(int i=0;i<amount+1;i++)
            dp[0][i]=INT_MAX;
        for(int i=0;i<coins.size()+1;i++)
            dp[i][0]=0;
        for(int i=1;i<coins.size()+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(j<coins[i-1])
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
            }
        }
        return dp[coins.size()][amount]==INT_MAX?-1:dp[coins.size()][amount];
    }
};
