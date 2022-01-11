Tree *solve(Tree *root)
{
    stack<Tree *> st;
    st.push(root);

    while (!st.empty())
    {
        Tree *top = st.top();
        st.pop();
        if (top)
        {
            st.push(top->left);
            st.push(top->right);
            swap(top->left, top->right);
        }
    }

    return root;
}