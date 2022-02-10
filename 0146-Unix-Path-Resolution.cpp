vector<string> solve(vector<string> &path)
{
    vector<string> res;

    for (const string &p : path)
    {
        if (p == "..")
        {
            if (!res.empty())
                res.pop_back();
        }
        else if (p != ".")
            res.push_back(p);
    }

    return res;
}