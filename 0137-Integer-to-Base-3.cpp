#include <vector>

string solve(int n)
{
    if (n == 0)
        return "0";
    vector<int> num(32);
    int i = 0;
    while (n)
    {
        num[i] = n % 3;
        n /= 3;
        i++;
    }
    string ans = "";
    for (int j = i - 1; j >= 0; j--)
        ans += (num[j] + '0');
    return ans;
}