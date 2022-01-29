#include "0000-DataStructures.hpp"

void traverse(Tree *node, int curr, int &res)
{
    if (!node)
        return;
    curr *= 10;
    curr += node->val;
    if (!node->left && !node->right)
    {
        res += curr;
        return;
    }
    traverse(node->left, curr, res);
    traverse(node->right, curr, res);
}

int solve(Tree *root)
{
    int res = 0;

    traverse(root, 0, res);

    return res;
}