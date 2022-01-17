#include "0000-DataStructures.hpp"

bool solve(Tree *root, int val)
{
    while (root)
    {
        if (root->val == val)
            return true;
        else if (root->val > val)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}