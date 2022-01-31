#include <stack>

bool solve(string s)
{
    // if not even - cannot be balanced
    if (s.size() % 2 != 0)
        return false;
    stack<char> st;

    for (char c : s)
    {
        if (c == '[' || c == '{' || c == '(')
            st.push(c);
        else
        {
            if (st.empty())
                return false;
            char match = st.top();
            st.pop();
            if (match == '{' && c == '}')
                continue;
            else if (match == '(' && c == ')')
                continue;
            else if (match == '[' && c == ']')
                continue;
            return false;
        }
    }

    return st.empty();
}