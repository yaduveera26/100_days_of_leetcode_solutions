class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid[0].size(),m=grid.size();
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(grid[i][j]<0)
                    cnt+=1;
                else
                    break;
            }
        }
        return cnt;
    }
};
