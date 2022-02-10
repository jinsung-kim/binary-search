#include <unordered_set>

int solve(string s)
{
    unordered_set<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (st.find(c) == st.end())
            st.insert(c);
        else
            return i;
    }

    return -1;
}