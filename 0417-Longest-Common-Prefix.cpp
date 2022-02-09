string solve(vector<string> &words)
{
    string pref = "", shortest = words[0];

    // get shortest word
    for (auto word : words)
    {
        if (word.size() < shortest.size())
            shortest = word;
    }

    int i = 0;
    // prefix can only be as long as shortest word
    for (char c : shortest)
    {
        for (auto word : words)
        {
            if (word[i] != c)
                return pref;
        }
        i++;
        pref += c;
    }

    return pref;
}