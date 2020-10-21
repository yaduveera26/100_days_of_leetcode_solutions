class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       vector<int>v;
        sort(nums.begin(),nums.end());
        int sum=0;
        for(auto p:nums)
            sum+=p;
        int s=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            v.push_back(nums[i]);
            s+=nums[i];
            if(s>sum-s)
            {
                break;
            }
        }
        return v;
    }
};
