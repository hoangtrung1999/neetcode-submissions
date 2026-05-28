class Solution {
public:
    bool isValid(string s) {
        vector<char> myStack;
        int size = s.size();
        if (size < 2)
            return false;
        for (int i = 0; i < size; i++)
        {
            cout<<"Current: "<<s[i]<<endl;
            if (s[i] == '(' or s[i] == '{' or s[i] == '[')
            {
                myStack.push_back(s[i]);
                cout<<myStack[myStack.size()-1]<<endl;
            }
                
            else
            {
                if (myStack.size() > 0)
                {
                                    switch(s[i])
                {
                case ')':
                    cout<<"Checking: "<<s[i]<<endl;
                    if (myStack[myStack.size()-1] == '(')
                        myStack.pop_back();
                    else
                        return false;
                    break;
                case '}':
                    cout<<"Checking: "<<s[i]<<endl;
                    if (myStack[myStack.size()-1] == '{')
                        myStack.pop_back();
                    else
                        return false;
                    break;
                case ']':
                    cout<<"Checking: "<<s[i]<<endl;
                    if (myStack[myStack.size()-1] == '[')
                        myStack.pop_back();
                    else
                        return false;
                    break;
                        
                default: 
                    return false;
                }
                }
                else
                    return false;

            }
        }
        if (myStack.size() == 0)
            return true;
        else
            return false;
    }
};
