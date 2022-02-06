#include <vector>
#include <string>

vector<string> solve(string s)
{
    vector<string> res;
    string curr = "";
    int b = 0;

    for (char n : s)
    {
        curr += n;
        if (n == '(')
            b++;
        else
        {
            b--;
            if (b == 0)
            {
                res.push_back(curr);
                curr = "";
            }
        }
    }

    return res;
}