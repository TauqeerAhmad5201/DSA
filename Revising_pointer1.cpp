#include<iostream>
using namespace std;

int main(){
    
    int a;
    int *b = &a;
    int **c = &b;

    cout<<"Enter intger a : \n";
    cin>>a;

    cout<<"\nValue a : "<<a;
    cout<<"\nValue b : "<<b;
    cout<<"\nValue *b : "<<*b;
    cout<<"\nValue c : "<<c;
    cout<<"\nValue *c : "<<*c;
    cout<<endl;
    return 0; 
}
