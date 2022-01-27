#include "0000-DataStructures.hpp"

bool solve(LLNode *head)
{
    LLNode *prev = head, *curr = head->next;

    while (curr)
    {
        if (prev->val >= curr->val)
            return false;
        prev = curr;
        curr = curr->next;
    }

    return true;
}