#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int post(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    string value;
    cout << "Enter the postfix expression: ";
    cin >> value;
    cout << "Result is: " << post(value) << endl;
    return 0;
} // during the input giving time avoid the white space the only it provide the correct out pu
  // eg:34+9* like this way
  // not do this way -3 4 + 9 *