int solve(vector<int> &rooms, int target)
{

    for (size_t i = 0; i < rooms.size(); i++)
    {
        if (rooms[i] >= target)
            return rooms[i];
    }

    return -1;
}