#include "0000-DataStructures.hpp"
#include <vector>

void inorder(Tree *n, vector<int> &res)
{
    if (!n)
        return;
    inorder(n->left, res);
    res.push_back(n->val);
    inorder(n->right, res);
}

vector<int> solve(Tree *root)
{
    vector<int> res;

    inorder(root, res);

    return res;
}