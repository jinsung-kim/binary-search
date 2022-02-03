#include "0000-DataStructures.hpp"
#include <unordered_map>

void inorder(Tree *n, unordered_map<int, Tree *> &m, int curr, int &ma)
{
    if (!n)
        return;
    if (curr > ma)
    {
        m[curr] = n;
        ma = curr;
    }
    inorder(n->left, m, curr + 1, ma);
    inorder(n->right, m, curr + 1, ma);
}

int solve(Tree *root)
{
    if (root && !root->left && !root->right)
        return root->val;
    unordered_map<int, Tree *> m;
    int highest = 0;

    inorder(root, m, 0, highest);

    return m[highest]->val;
}