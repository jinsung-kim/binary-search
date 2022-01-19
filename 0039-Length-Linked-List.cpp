#include "0000-DataStructures.hpp"

int solve(LLNode *node)
{
    int res = 0;

    while (node)
    {
        node = node->next;
        res++;
    }

    return res;
}