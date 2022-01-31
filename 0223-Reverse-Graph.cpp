#include <vector>

vector<vector<int>> solve(vector<vector<int>> &graph)
{
    vector<vector<int>> g(graph.size(), vector<int>());

    for (int i = 0; i < graph.size(); i++)
    {
        for (int conn : graph[i])
        {
            g[conn].push_back(i);
        }
    }

    return g;
}