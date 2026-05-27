class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        vector<char> stringS;
        for (int i = 0; i < size; i++)
        {
            if (isalpha(s[i]) or isdigit(s[i]))
                stringS.push_back(tolower(s[i]));
        }
        size = stringS.size();
        int j = size - 1;
        for (int i = 0; i < j; i++)
        {
            if (stringS[i] != stringS[j])
            {
                cout<<stringS[i]<<" & "<<stringS[j]<<endl;
                return false;
            }
            else
            {
                j--;
            }
        }
        return true;
    }
};
