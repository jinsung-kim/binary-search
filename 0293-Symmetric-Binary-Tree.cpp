bool mirrored(Tree *l, Tree *r)
{
    if (!l && !r)
        return true;
    if (!l || !r)
        return false;
    // Both exist
    return (l->val == r->val) && mirrored(l->right, r->left) && mirrored(l->left, r->right);
}

bool solve(Tree *root)
{
    // Sol 1: Simply inorder and check if reverse the same
    // Sol 2: Recursive traversal
    if (!root)
        return true;

    return mirrored(root, root);
}