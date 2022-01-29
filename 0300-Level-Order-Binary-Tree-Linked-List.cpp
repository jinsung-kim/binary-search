#include "0000-DataStructures.hpp"
#include <unordered_map>
#include <vector>

void dfs(Tree *node, unordered_map<int, vector<int>> &m,
         int curr, int &ma)
{
    if (!node)
        return;
    m[curr].push_back(node->val);
    curr++;
    if (curr > ma)
        ma = curr;
    dfs(node->left, m, curr, ma);
    dfs(node->right, m, curr, ma);
}

LLNode *solve(Tree *root)
{
    unordered_map<int, vector<int>> m;
    int ma = 0;
    dfs(root, m, 0, ma);

    LLNode *res = new LLNode(), *curr = res;

    for (int i = 0; i <= ma; i++)
    {
        vector<int> level = m[i];
        for (int node : level)
        {
            curr->next = new LLNode();
            curr->next->val = node;
            curr = curr->next;
        }
    }

    return res->next;
}