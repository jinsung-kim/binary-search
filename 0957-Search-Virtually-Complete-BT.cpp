#include "0000-DataStructures.hpp"

bool dfs(Tree *n, int t)
{
    if (!n)
        return false;
    return (n->val == t) || dfs(n->left, t) || dfs(n->right, t);
}

bool solve(Tree *root, int target)
{
    return dfs(root, target);
}