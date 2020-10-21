class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int> >v(mat.size());
        for(int i=0;i<mat.size();i++)
        {
            int cnt=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j])
                    cnt+=1;
            }
            v[i]=(make_pair(cnt,i));
        }
        sort(v.begin(),v.end());
        vector<int>h(k);
        for(int i=0;i<k;i++)
        {
            h[i]=v[i].second;
        }
        return h;
    }
};
