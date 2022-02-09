int util(int n)
{
    int curr = n, next = 0, digit;

    while (curr)
    {
        digit = curr % 10;
        curr /= 10;
        next += (digit * digit);
    }

    return next;
}

bool solve(int n)
{
    int slow = n, fast = n;

    do
    {
        slow = util(slow);
        fast = util(util(fast));
    } while (slow != fast);

    return slow == 1;
}