class Solution {
public:
    int minDeletionSize(vector<string>& a) {
        int column=a[0].size(),row=a.size(),d=0;
        for(int j=0;j<column;j++)
        {
            for(int i=0;i<row-1;i++)
            {
                if(a[i][j]>a[i+1][j])
                {
                    d+=1;
                    break;
                }
            }
        }
        return d;
    }
};
