class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        for(int i=0;i<pieces.size();i++)
        {
            int flag=-1;
            for(int j=0;j<pieces[i].size();j++)
            {
                if(flag==-1)
                for(int k=0;k<arr.size();k++)
                {
                    if(pieces[i][j]==arr[k])
                    {
                        flag=k;
                        break;
                    }
                }
                if(flag==-1)
                    return false;
                else
                {
                    if(pieces[i][j]!=arr[flag])
                        return false;
                    flag+=1;
                }
            }
        }
        return true;
    }
};
