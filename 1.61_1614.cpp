class Solution {
public:
    int maxDepth(string S) {
        int cnt=0,depth=0;
        for(auto s:S)
        {
            if(s=='(')
                cnt+=1;
            else if(s==')')
                cnt-=1;
            depth=max(cnt,depth);
        }
        return depth;
    }
};
