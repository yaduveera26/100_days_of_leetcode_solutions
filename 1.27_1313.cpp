class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size()/2;i++)
        {
            int p=nums[2*i];
            while(p>0)
            {
                v.push_back(nums[2*i+1]);
                p-=1;
            }
        }
        return v;
    }
};
