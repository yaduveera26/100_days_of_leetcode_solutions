class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int ma=candies[0];
        for(auto p:candies)
        {
            if(p>ma)
                ma=p;
        }
        vector<bool>b(candies.size());
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=ma)
                b[i]=true;
            else
                b[i]=false;
        }
        return b;
    }
};
