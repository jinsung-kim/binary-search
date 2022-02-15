int solve(vector<string> &shows, vector<int> &durations, int k)
{
    unordered_map<string, int> m;

    for (int i = 0; i < shows.size(); i++)
    {
        if (m.find(shows[i]) == m.end())
            m[shows[i]] = durations[i];
        else
            m[shows[i]] += durations[i];
    }

    vector<int> t;
    for (auto it : m)
        t.push_back(it.second);

    sort(t.begin(), t.end(), greater<int>());

    int res = 0;

    for (int i = 0; i < k; i++)
        res += t[i];

    return res;
}