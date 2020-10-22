class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=0;
        for(auto s:salary)
            sum+=s;
        sum-=salary[0];
        sum-=salary[salary.size()-1];
        sum/=(salary.size()-2);
        return sum;
    }
};
