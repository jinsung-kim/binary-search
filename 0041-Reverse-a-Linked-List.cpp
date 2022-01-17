#include "0000-DataStructures.hpp"

LLNode *solve(LLNode *node)
{
    LLNode *prev = nullptr, *curr = node, *following = node;

    while (curr)
    {
        following = following->next;
        curr->next = prev;
        prev = curr;
        curr = following;
    }

    return prev;
}