LLNode *solve(LLNode *ll0, LLNode *ll1)
{
    LLNode *res = new LLNode(), *curr = res;

    while (ll0 && ll1)
    {
        curr->next = new LLNode();
        if (ll0->val > ll1->val)
        {
            curr->next->val = ll1->val;
            curr = curr->next;
            ll1 = ll1->next;
        }
        else if (ll0->val < ll1->val)
        {
            curr->next->val = ll0->val;
            curr = curr->next;
            ll0 = ll0->next;
        }
        else
        {
            curr->next->val = ll0->val;
            curr = curr->next;
            ll0 = ll0->next;
            ll1 = ll1->next;
        }
    }

    if (ll0)
        curr->next = ll0;
    if (ll1)
        curr->next = ll1;

    return res->next;
}