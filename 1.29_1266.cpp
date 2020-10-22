class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int s=0;
        for(int i=0;i<points.size()-1;i++)
        {
            int a = points[i][0]-points[i+1][0],b = points[i][1]-points[i+1][1];
            if(a<0)
                a*=-1;
            if(b<0)
                b*=-1;
            s+=max(a,b);
        }
        return s;
    }
};
