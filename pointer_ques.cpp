#include<iostream>
using namespace std;

void fun(const int *p)
{
    *p = 0;      // since constant is not letting p to be changed.
}

int main()
{
    const int i = 10;
    fun(&i);
    return 0;
}