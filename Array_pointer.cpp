#include<iostream>
using namespace std;

int main(){

    int a[10]={5,7,3,2,4,0,9,1,3,12};

    cout<<"\na[0] : "<<a[0];
    cout<<"\na : "<<a; 
    cout<<"\n&a : "<<&a;          // a == &a[0]
    cout<<"\n&a[0] : "<<&a[0];
    cout<<"\n&a[1] : "<<&a[1];
    cout<<"\n*(&a[1]) : "<<*(&a[1]);
    cout<<"\na+1 : "<<a+1; 
    cout<<"\na+1 : "<<*(a+1);
    cout<<endl;
    return 0;
}