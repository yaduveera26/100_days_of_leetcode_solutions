class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v(nums.size());
        for(int i=0,j=0;i<nums.size()/2;i++)
        {
            v[j]=nums[i];
            v[j+1]=nums[i+nums.size()/2];
            j+=2;
        }
        return v;
    }
};
