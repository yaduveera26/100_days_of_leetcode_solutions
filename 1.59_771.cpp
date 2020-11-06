class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt=0;
        for(auto s:S)
        {
            for(auto j:J)
                if(s==j)
                {
                    cnt+=1;
                    break;
                }
        }
        return cnt;
    }
};
