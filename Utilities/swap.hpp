void swap(bool cond, int &a, int &b)
{
    if(cond)
    {
        int t=a;
        a = b;
        b = t;
    }
}
