#include "0000-DataStructures.hpp"

Tree *solve(LLNode *node)
{
    Tree *root = new Tree(), *curr = root;
    if (!node)
        return nullptr;

    curr->val = node->val;
    node = node->next;

    while (node)
    {
        if (node->val < curr->val)
        {
            curr->left = new Tree();
            curr = curr->left;
            curr->val = node->val;
        }
        else
        {
            curr->right = new Tree();
            curr = curr->right;
            curr->val = node->val;
        }
        node = node->next;
    }

    return root;
}