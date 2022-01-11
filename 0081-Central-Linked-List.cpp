int solve(LLNode *node)
{
    LLNode *slow = node, *fast = node;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast->next)
        slow = slow->next;
    return slow->val;
}