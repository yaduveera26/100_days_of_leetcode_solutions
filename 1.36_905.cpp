class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>v(A.size());
        int l=0,r=A.size()-1;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2)
            {
                v[r]=A[i];
                r-=1;
            }
            else{
                v[l]=A[i];
                l+=1;
            }
        }
        return v;
    }
};
