class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ma=nums[0];
        for(auto p:nums)
        {
            if(p>ma)
                ma=p;
        }
        vector<int>v(ma+1,0);
        for(auto p:nums)
        {
            v[p]+=1;
        }
        int s=0;
        for(auto p:v)
        {
            p=(p*(p-1))/2;
            s+=p;
        }
        return s;
    }
};
