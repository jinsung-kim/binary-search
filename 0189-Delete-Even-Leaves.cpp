void dfs(Tree *&n)
{
    if (!n)
        return;

    dfs(n->left);
    dfs(n->right);

    if (!n->left && !n->right && n->val % 2 == 0)
    {
        n = nullptr;
        return;
    }
}

Tree *solve(Tree *root)
{
    dfs(root);
    return root;
}