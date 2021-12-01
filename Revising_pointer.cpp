// Day1
#include<iostream>

using namespace std; 

int main()
{
    int a;
    int *b = &a;

    cout<<"Enter any integer value : ";
    cin>>a;

    cout<<"\na : "<<a;
    cout<<"\nb : "<<b;
    cout<<"\n*b : "<<*b;   // value at b 
    cout<<endl;

    return 0;
}