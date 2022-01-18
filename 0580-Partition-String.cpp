#include <vector>

vector<int> solve(string s)
{
    vector<int> res;
    vector<int> m(26, 0);

    // find last instance of each letter
    for (int i = 0; i < s.size(); i++)
        m[s[i] - 'a'] = i;

    int st = 0, en = 0;

    for (int i = 0; i < s.size(); i++)
    {
        en = max(en, m[s[i] - 'a']);
        if (i == en)
        {
            res.push_back(en - st + 1);
            st = en + 1;
        }
    }

    return res;
}