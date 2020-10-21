class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int>v(A.size());
        int e=0,o=1;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                v[e]=A[i];
                e+=2;
            }
            else
            {
                v[o]=A[i];
                o+=2;
            }
        }
        return v;
    }
};
