class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int A=arr[i]-arr[j];
                if(A<0)
                    A*=-1;
                if(A<=a)
                {
                    for(int k=j+1;k<arr.size();k++)
                    {
                        int B=arr[j]-arr[k],C=arr[i]-arr[k];
                        if(B<0)
                            B*=-1;
                        if(C<0)
                            C*=-1;
                        if(B<=b&&C<=c)
                            cnt+=1;
                    }
                }
            }
        }
        return cnt;
    }
};
