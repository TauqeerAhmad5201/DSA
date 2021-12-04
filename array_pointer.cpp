#include<iostream>
using namespace std;
int main()
{
    int A[5] = {5,8,9,6,10};
    int *p = A; 

    cout<<"A : "<<A;
    cout<<"\n&A[0] : "<<&A[0];
    cout<<"\n2[A] : "<<2[A];     // A[2]
    cout<<"\nA+3 : "<<A+3; 
    cout<<"\n*(A+3) : "<<*(A+3);   
    cout<<endl;
    return 0;
}