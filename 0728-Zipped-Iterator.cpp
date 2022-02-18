class ZippedIterator
{
public:
    ZippedIterator(vector<int> &a, vector<int> &b)
    {
        int i = 0, j = 0;

        while (i < a.size() || j < b.size())
        {
            if (i < a.size())
                merged.push(a[i++]);
            if (j < b.size())
                merged.push(b[j++]);
        }
    }

    int next()
    {
        int n = merged.front();
        merged.pop();
        return n;
    }

    bool hasnext()
    {
        return !merged.empty();
    }

private:
    queue<int> merged;
};