class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int> >v;
        for(int i=0;i<arr.size();i++)
        {
            bitset<32>f(arr[i]);
            int cnt=f.count();
            v.push_back(make_pair(cnt,arr[i]));
        }
        sort(v.begin(),v.end());
        vector<int>l;
        for(auto t:v)
        {
            l.push_back(t.second);
        }
        return l;
    }
};
