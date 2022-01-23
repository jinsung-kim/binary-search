#include <vector>
#include <queue>

class PeekableIterator
{
public:
    PeekableIterator(vector<int> &nums)
    {
        for (int n : nums)
            q.push(n);
    }

    int peek()
    {
        return q.front();
    }

    int next()
    {
        int r = q.front();
        q.pop();
        return r;
    }

    bool hasnext()
    {
        return !q.empty();
    }

private:
    queue<int> q;
};