class Solution {
public:
    string defangIPaddr(string address) {
        string p;
        for(auto l:address)
        {
            if(l=='.')
                p+="[.]";
            else
            p+=l;
        }
        return p;
    }
};
