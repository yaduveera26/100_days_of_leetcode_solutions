class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int ma=nums[0];
        for(auto p:nums)
            if(p>ma)
                ma=p;
        vector<pair<int,int> >v(ma+1);
        for(int i=0;i<ma;i++)
        {
            v[i].first=0;
            v[i].second=0;
        }
        for(auto p:nums)
            v[p].first+=1;
        for(int i=1;i<=ma;i++)
        {
            v[i].second=(v[i-1].first+v[i-1].second);
        }
        vector<int>t(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            t[i]=v[nums[i]].second;
        }
        return t;
    }
};
