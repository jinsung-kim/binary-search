int solve(vector<string> &ops)
{
    stack<int> st;
    for (auto op : ops)
    {
        if (op == "POP")
        {
            if (st.empty())
                return -1;
            else
                st.pop();
        }
        else if (op == "DUP")
        {
            if (st.empty())
                return -1;
            st.push(st.top());
        }
        else if (op == "+" || op == "-")
        {
            if (st.size() < 2)
                return -1;
            int m = st.top();
            st.pop();
            int n = st.top();
            st.pop();
            if (op == "+")
                st.push(m + n);
            else
                st.push(m - n);
        }
        else
            st.push(stoi(op));
    }
    return st.top();
}