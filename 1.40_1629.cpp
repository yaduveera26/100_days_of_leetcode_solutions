class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int ma=releaseTimes[0];
        char c=keysPressed[0];
        for(int i=1;i<keysPressed.size();i++)
        {
            if(releaseTimes[i]-releaseTimes[i-1]>ma)
            {
                ma=releaseTimes[i]-releaseTimes[i-1];
                c=keysPressed[i];
            }
            else if(releaseTimes[i]-releaseTimes[i-1]==ma)
            {
                if(keysPressed[i]>c)
                    c=keysPressed[i];
            }
        }
        return c;
    }
};
