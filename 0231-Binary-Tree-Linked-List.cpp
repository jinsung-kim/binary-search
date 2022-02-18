void inorder(Tree *n, vector<int> &ino)
{
    if (!n)
        return;
    inorder(n->left, ino);
    ino.push_back(n->val);
    inorder(n->right, ino);
}

LLNode *solve(Tree *root)
{
    LLNode *res = new LLNode(), *curr = res;

    vector<int> ino;
    inorder(root, ino);

    for (int i = 0; i < ino.size(); i++)
    {
        curr->next = new LLNode();
        curr->next->val = ino[i];
        curr = curr->next;
    }

    return res->next;
}