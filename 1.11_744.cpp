class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char c='0';
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i]>target)
            {
                c=letters[i];
                break;
            }
        }
        if(c!='0')
            return c;
        return letters[0];
    }
};
