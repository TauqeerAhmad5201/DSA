#include<iostream>
using namespace std;
int main()
{
    int a[5] = {5,7,3,4,6};

    int *p, *q; 

    p = &a[0];
    q = &a[3];
    
    cout<<endl;
    cout<<&a[1];
    cout<<endl;
    p++;
    cout<<p++;
    cout<<endl;
    q--;
    cout<<q--;

    return 0;

}