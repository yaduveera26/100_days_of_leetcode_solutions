class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        vector<int>v;
        int l=0,r=0;
        while(l<nums1.size()&&r<nums2.size())
        {
            if(nums1[l]==nums2[r])
            {
                if(v.size()==0||v[v.size()-1]!=nums1[l])
                v.push_back(nums1[l]);
                l+=1;
                r+=1;
            }
            else if(nums1[l]>nums2[r])
                r+=1;
            else
                l+=1;
        }
        return v;
    }
