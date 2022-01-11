vector<int> solve(Tree *root)
{
    vector<int> res;

    queue<Tree *> q;

    q.push(root);

    while (!q.empty())
    {
        Tree *curr = q.front();
        q.pop();
        if (curr)
        { // exists
            res.push_back(curr->val);
            q.push(curr->left);
            q.push(curr->right);
        }
    }

    return res;
}