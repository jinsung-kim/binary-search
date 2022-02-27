int solve(vector<vector<int>> &reviews, int threshold)
{
    double curr = 0.0;
    double fiveStars = 0.0, total = 0.0;

    for (auto prod : reviews)
    {
        fiveStars += prod[0];
        total += prod[1];
    }

    curr = fiveStars / total;

    int res = 0;
    double t = (double)(threshold) / 100.0;

    while (curr < t)
    {
        fiveStars += 1;
        total += 1;
        res++;
        curr = fiveStars / total;
    }

    return res;
}