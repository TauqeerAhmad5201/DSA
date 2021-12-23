#include<iostream>
using namespace std;
int main()
{
    int a[5] = {5,7,3,4,6};

    int *p, *q; 

    p = &a[0];
    cout<<"p : "<<p; 
    q = &a[3];

    p = p+2; 
    cout<<"p+2 : "<<p; 
    cout<<endl;
    return 0;

}