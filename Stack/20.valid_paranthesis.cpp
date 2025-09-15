#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string str) {
        stack<char>st;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '(' || str[i] == '{'|| str[i]=='[') //left bracketss
            {
                st.push(str[i]);
            }
            else
            {
                if(st.size() == 0)
                return false;
                else
                {
                if((st.top() == '(' && str[i] == ')') || (st.top() == '{' && str[i] == '}') || (st.top () == '[' && str[i] == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
                }
            }
        }
      return st.size() == 0;
    }
};