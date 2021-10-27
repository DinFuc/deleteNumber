inline long long deleteNumber(std::vector<int> N)
{
    long long odd = 0, even;
    for(int i : N)
        if(i & 1) odd++;
    
    even = N.size() - odd;
    if(odd & 1) return odd * even;
    return (long long)(odd * (odd - 1) / 2 + even * (even - 1) / 2);
}
