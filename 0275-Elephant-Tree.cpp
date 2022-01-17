#include "0000-DataStructures.hpp"

void dfs(Tree *n)
{
    if (!n)
        return;
    int sumOfChildren = 0;
    if (n->left)
    {
        dfs(n->left);
        sumOfChildren += n->left->val;
    }
    if (n->right)
    {
        dfs(n->right);
        sumOfChildren += n->right->val;
    }
    n->val = n->val + sumOfChildren;
}

Tree *solve(Tree *root)
{
    dfs(root);
    return root;
}