class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size();i++)
        {
            int m=prices[i],f=0;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=m)
                {
                    m=prices[j];
                    f=1;
                    break;
                }
            }
            if(f)
                prices[i]-=m;
        }
        return prices;
    }
};
