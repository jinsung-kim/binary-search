#include "0000-DataStructures.hpp"

int solve(Tree *root)
{
    int l = 0, r = 0;
    Tree *ln = root, *rn = root;

    while (ln)
        l++, ln = ln->left;
    while (rn)
        r++, rn = rn->right;

    if (r == l)
        return (1 << l) - 1;

    return 1 + solve(root->left) + solve(root->right);
}