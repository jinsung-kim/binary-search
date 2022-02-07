int solve(int n)
{
    string strN = to_string(n), biggest = "";
    bool flip = true;

    for (char c : strN)
    {
        if (c == '3')
            biggest += c;
        else
        {
            // flip + then can no longer flip
            if (flip)
            {
                biggest += '3';
                flip = false;
            } // already flipped
            else
                biggest += c;
        }
    }

    return stoi(biggest);
}