string solve(int n)
{
    string res = "";

    vector<pair<string, int>> map = {{"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}};

    int i = 0; // current index we are on
    while (n)
    {
        if (n >= map[i].second)
        {
            res += map[i].first;
            n -= map[i].second;
        }
        else
            i++;
    }

    return res;
}