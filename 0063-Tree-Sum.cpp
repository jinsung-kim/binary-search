#include "0000-DataStructures.hpp"

void dfs(Tree *n, int &res)
{
    if (!n)
        return;
    dfs(n->left, res);
    dfs(n->right, res);
    res += n->val;
}

int solve(Tree *root)
{
    int res = 0;

    dfs(root, res);

    return res;
}