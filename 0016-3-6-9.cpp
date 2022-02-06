#include <vector>

bool in369(int n)
{
    if (n % 3 == 0)
        return true;
    else
    {
        while (n)
        {
            int last = n % 10;
            if (last == 3 || last == 6 || last == 9)
                return true;
            n /= 10;
        }
        return false;
    }
}

vector<string> solve(int n)
{
    vector<string> res;

    for (int i = 1; i <= n; i++)
    {
        if (in369(i))
            res.push_back("clap");
        else
            res.push_back(to_string(i));
    }

    return res;
}