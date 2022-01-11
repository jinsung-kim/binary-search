void inorder(Tree *n, vector<int> &res)
{
    if (!n)
        return;
    if (n->left)
        inorder(n->left, res);
    res.push_back(n->val);
    if (n->right)
        inorder(n->right, res);
}

int solve(Tree *root, int k)
{
    vector<int> res;
    inorder(root, res);
    return res[k];
}