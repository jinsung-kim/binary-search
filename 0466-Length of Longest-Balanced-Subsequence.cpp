#include <stack>

int solve(string s)
{
    int res = 0;
    stack<char> st;

    for (char c : s)
    {
        if (c == '(')
            st.push(c);
        else
        {
            if (!st.empty())
            {
                st.pop();
                res += 2;
            }
        }
    }

    return res;
}