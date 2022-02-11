#include "0000-DataStructures.hpp"

LLNode *solve(LLNode *l0, LLNode *l1)
{
    LLNode *res = new LLNode(), *curr = res, *first, *second;

    while (l0 && l1)
    {
        first = new LLNode();
        first->val = l0->val;
        second = new LLNode();
        second->val = l1->val;

        curr->next = first;
        curr = curr->next;
        curr->next = second;
        curr = curr->next;
        l0 = l0->next;
        l1 = l1->next;
    }

    if (l0)
        curr->next = l0;
    if (l1)
        curr->next = l1;

    return res->next;
}