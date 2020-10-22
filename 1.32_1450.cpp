class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int s=0;
        for(int i=0;i<startTime.size();i++)
        {
            if(queryTime<=endTime[i]&&queryTime>=startTime[i])
                s+=1;
        }
        return s;
    }
};
