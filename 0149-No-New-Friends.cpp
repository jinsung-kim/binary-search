#include <unordered_set>
#include <vector>

bool solve(int n, vector<vector<int>> &friends)
{
    unordered_set<int> st;

    for (auto person : friends)
    {
        st.insert(person[0]);
        st.insert(person[1]);
    }

    return st.size() == n;
}