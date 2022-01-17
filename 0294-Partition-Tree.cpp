#include "0000-DataStructures.hpp"
#include <vector>

void dfs(Tree *node, vector<int> &res)
{
    if (!node)
        return;
    if (!node->left && !node->right)
        res[0]++;
    else
    {
        res[1]++;
        dfs(node->left, res);
        dfs(node->right, res);
    }
}

vector<int> solve(Tree *root)
{
    vector<int> res(2, 0);

    dfs(root, res);

    return res;
}