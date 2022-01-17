#include "0000-DataStructures.hpp"

void inorder(Tree *n, int &res, int lo, int hi)
{
    if (!n)
        return;
    inorder(n->left, res, lo, hi);
    if (n->val <= hi && n->val >= lo)
        res++;
    inorder(n->right, res, lo, hi);
}

int solve(Tree *root, int lo, int hi)
{
    int res = 0;
    inorder(root, res, lo, hi);
    return res;
}