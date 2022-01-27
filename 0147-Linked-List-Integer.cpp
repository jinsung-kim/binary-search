#include "0000-DataStructures.hpp"

int solve(LLNode *node)
{
    int res = 0, len = 0;

    auto curr = node;
    while (curr)
    {
        len++;
        curr = curr->next;
    }
    len--;

    curr = node;
    while (curr)
    {
        res += (curr->val ? pow(2, len) : 0);
        len--;
        curr = curr->next;
    }

    return res;
}