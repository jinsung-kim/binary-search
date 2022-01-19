#include <unordered_set>
#include <string>

bool solve(string s)
{
    unordered_set<char> st;

    for (char c : s)
    {
        if (st.find(c) != st.end())
            return false;
        st.insert(c);
    }

    return true;
}