class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int> >v(n);
        for(int i=0;i<n;i++)
            v[i].resize(m);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                v[i][j]=0;
        for(int i=0;i<indices.size();i++)
        {
            int a=indices[i][0],b=indices[i][1];
            for(int i=0;i<m;i++)
                v[a][i]+=1;
            for(int i=0;i<n;i++)
                v[i][b]+=1;
        }
        int c=0;
       for(int i=0;i<n;i++)
           for(int j=0;j<m;j++)
               if(v[i][j]%2)
                   c+=1;
        return c;
    }
};
