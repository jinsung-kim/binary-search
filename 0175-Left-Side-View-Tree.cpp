#include "0000-DataStructures.hpp"
#include <vector>
#include <unordered_map>

void inorder(Tree *node, int curr, int &m,
             unordered_map<int, vector<int>> &levels)
{
    if (!node)
        return;
    inorder(node->left, curr + 1, m, levels);
    levels[curr].push_back(node->val);
    if (curr > m)
        m = curr;
    inorder(node->right, curr + 1, m, levels);
}

vector<int> solve(Tree *root)
{
    vector<int> res;
    int m = 0;
    unordered_map<int, vector<int>> levels;

    inorder(root, 0, m, levels);

    for (int i = 0; i <= m; i++)
    {
        res.push_back(levels[i][0]);
    }

    return res;
}