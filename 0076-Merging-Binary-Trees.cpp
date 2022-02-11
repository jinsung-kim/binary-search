#include "0000-DataStructures.hpp"

Tree *solve(Tree *node0, Tree *node1)
{
    if (!node0 && !node1)
        return nullptr;
    if (!node0)
        return node1;
    if (!node1)
        return node0;
    node0->val += node1->val;
    node0->left = solve(node0->left, node1->left);
    node0->right = solve(node0->right, node1->right);
    return node0;
}