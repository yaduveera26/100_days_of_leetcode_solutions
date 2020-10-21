class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(isBadVersion(m))
            {
                if(!isBadVersion(m-1))
                    return m;
                else
                    r=m-1;
            }
            else
                l=m+1;
        }
        return l;
    }
};
