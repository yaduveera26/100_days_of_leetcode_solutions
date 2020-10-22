class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[i].size()/2;j++)
            {
                int temp = A[i][A[i].size()-1-j];
                A[i][A[i].size()-1-j]=A[i][j];
                A[i][j]=temp;
            }
        }
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                if(A[i][j])
                    A[i][j]=0;
                else
                    A[i][j]=1;
            }
        }
        return A;
    }
};
