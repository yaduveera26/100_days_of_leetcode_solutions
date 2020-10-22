class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v(n,0);
            for(int i=0;i<n/2;i++)
            {
                v[i]=i+1;
                v[n-1-i]=-(i+1);
            }
        if(n%2)
            v[n/2]=0;
        return v;
    }
};
