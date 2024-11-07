int reversed(int& n)
{
    int n2=0;
    while(n!=0) n2*=10, n2+=n%10, n/=10;
    return n2;
}