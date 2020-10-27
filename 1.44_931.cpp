class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        if(A.size()==0)
            return 0;
        if(A.size()==1)
            return A[0][0];
        int ans=INT_MAX;
        for(int i=1;i<A.size();i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                if(j==0)
                    A[i][j]+=min(A[i-1][j],A[i-1][j+1]);
                else if(j==A[i].size()-1)
                    A[i][j]+=min(A[i-1][j],A[i-1][j-1]);
                else
                    A[i][j]+=min({A[i-1][j-1],A[i-1][j],A[i-1][j+1]});
                if(i==A.size()-1)
                    ans=min(ans,A[i][j]);
            }
        }
        return ans;
    }
};
