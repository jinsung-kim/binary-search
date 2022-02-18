void inorder(Tree *n, int t, int &res)
{
    if (!n)
        return;
    if (n->val > t)
    {
        res = min(res, n->val);
        inorder(n->left, t, res);
    }
    else
        inorder(n->right, t, res);
}

int solve(Tree *root, int t)
{
    int res = INT_MAX;
    inorder(root, t, res);
    return res;
}