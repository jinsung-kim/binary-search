#include "0000-DataStructures.hpp"
#include <vector>

bool solve(LLNode *node)
{
    vector<int> conv;

    while (node)
    {
        conv.push_back(node->val);
        node = node->next;
    }

    int i = 0, j = conv.size() - 1;
    while (i < j)
    {
        if (conv[i++] != conv[j--])
            return false;
    }
    return true;
}