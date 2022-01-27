#include <vector>
#include <stack>

string solve(string s)
{
    vector<string> words;

    if (s.size() == 0)
        return s;
    string res = "", word;
    stack<string> st;

    for (size_t i = 0; i < s.size(); i++)
    {
        word = "";
        if (s[i] == ' ')
            continue; // skip space
        while (i < s.size() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        res += st.top();
        st.pop();
        if (!st.empty())
            res += ' ';
    }

    return res;
}