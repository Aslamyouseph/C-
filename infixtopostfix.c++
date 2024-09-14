#include <iostream>
#include <stack>
using namespace std;
int perc(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string post(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res = res + s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res = res + st.top();
                st.pop();
                if (!st.empty())
                {
                    st.pop();
                }
            }
        }
        else
        {
            while (!st.empty() && perc(st.top()) > perc(s[i]))
            {
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res = res + st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string value;
    cout << "Enter the infix expretion  : ";
    cin >> value;
    cout << "The result is " << post(value);
    return 0;
}