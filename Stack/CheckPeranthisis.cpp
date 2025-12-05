#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool checkSameStyle(char top, char ch)
{
    if (top == '[' && ch == ']')
        return true;
    else if (top == '{' && ch == '}')
        return true;
    else if (top == '(' && ch == ')')
        return true;
    else
        return false;
}

int main()
{
    string str = "[]{}(])";
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty())
            {
                cout << "Not Balanced ";
                break;
            }
            char top = st.top();
            if (checkSameStyle(top, ch))
                st.pop();
            else
            {
                cout << "Not Balanced ";
                break;
            }
        }
    }

    if (st.empty())
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}