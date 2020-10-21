class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int l=0,r=n.size()-1;
        while(1)
        {
            if(n[l]+n[r]>target)
                r-=1;
            else if(n[l]+n[r]<target)
                l+=1;
            else
                break;
        }
        vector<int>v{l+1,r+1};
        return v;
    }
};
