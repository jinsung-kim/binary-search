#include "0000-DataStructures.hpp"

int solve(LLNode *node, int k)
{
    LLNode *slow = node, *fast = node;
    while (k--)
        fast = fast->next;

    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow->val;
}