#include "0000-DataStructures.hpp"

bool dfs(Tree *n, int val)
{
    bool left = (n->left) ? dfs(n->left, val) : true;
    bool right = (n->right) ? dfs(n->right, val) : true;
    return left && right && n->val == val;
}

bool solve(Tree *root)
{
    if (!root)
        return false;
    int val = root->val;

    return dfs(root, val);
}