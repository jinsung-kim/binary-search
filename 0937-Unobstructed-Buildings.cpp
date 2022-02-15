vector<int> solve(vector<int> &heights)
{
    vector<int> res;
    if (heights.size() == 0)
        return res;
    res.push_back(heights.size() - 1);
    int m = heights.back();

    for (int i = heights.size() - 1; i >= 0; i--)
    {
        if (heights[i] > m)
            res.push_back(i);
        m = max(heights[i], m);
    }

    reverse(res.begin(), res.end());

    return res;
}
