#include "0000-DataStructures.hpp"
#include <vector>

void inorder(Tree *node, vector<int> &order)
{
    if (!node)
        return;
    inorder(node->left, order);
    order.push_back(node->val);
    inorder(node->right, order);
}

bool isPalindrome(const vector<int> &order)
{
    int l = 0, r = order.size() - 1;
    while (l < r)
    {
        if (order[l] != order[r])
            return false;
        l++, r--;
    }
    return true;
}

bool solve(Tree *root)
{
    vector<int> order;
    inorder(root, order);
    return isPalindrome(order);
}