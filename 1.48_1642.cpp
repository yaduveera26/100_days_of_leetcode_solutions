class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        for(int i=0;i<heights.size()-1;i++)
        {
            int h=heights[i]-heights[i+1];
            if(h>=0)
                continue;
            else
            {
                h*=-1;
                if(bricks>=h)
                    bricks-=h;
                else if(ladders>0)
                    ladders-=1;
                else
                    return i;
            }
        }
        return heights.size()-1;
    }
};
