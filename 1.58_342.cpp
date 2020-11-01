class Solution {
public:
    bool isPowerOfFour(int num) {
        int flag=0;
        if(num<=0)
            return false;
        while(num>1)
        {
            if(num%4)
            {
                flag=1;
                break;
            }
            num/=4;
        }
        if(flag)
            return false;
        return true;
    }
};
