#include "0000-DataStructures.hpp"

void dfs(Tree *n, int &res, int l, int &m)
{
    if (!n)
        return;
    if (l > m)
    {
        res = n->val;
        m = l;
    }
    else if (l == m)
    {
        res += n->val;
    }
    dfs(n->left, res, l + 1, m);
    dfs(n->right, res, l + 1, m);
}

int solve(Tree *root)
{
    int res = 0, m = 0;

    dfs(root, res, 0, m);

    return res;
}