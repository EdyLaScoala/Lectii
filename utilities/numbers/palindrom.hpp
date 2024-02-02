#include <reversed.hpp>

bool palindrom(int& n)
{
    int n2 = reversed(n);
    if(n==n2) return true; else return false;
}