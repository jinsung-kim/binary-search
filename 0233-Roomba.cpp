#include <vector>

bool solve(vector<string> &moves, int x, int y)
{
    int cx = 0, cy = 0;

    for (const string &move : moves)
    {
        if (move == "NORTH")
            cy++;
        else if (move == "WEST")
            cx--;
        else if (move == "EAST")
            cx++;
        else
            cy--;
    }

    return cx == x && cy == y;
}