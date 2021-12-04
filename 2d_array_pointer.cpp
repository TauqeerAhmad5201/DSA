#include<iostream>
using namespace std; 

int main()
{
    int **p;                // double pointer for 2-D array 
    p = new int *[3];       // dynamically creating array of pointers 

    p[0] = new int [4];
    p[1] = new int [4];
    p[2] = new int [4];

    cin>>*(*(p+0)+0);                      //Collectcing input 
    cout<<"*(*(p+0)+0) : "<<*(*(p+0)+0);
    cout<<endl;
    cin>>p[0][0];                          //Collectcing input 
    cout<<"\n*(*(p+0)+0) : "<<*(*(p+0)+0);
    cout<<"\np : "<<p;       
    cout<<"\n&p : "<<&p;
    cout<<"\n*p : "<<*p;
    cout<<"\n&p[0][0]: "<<&p[0][0];
    cout<<"\np+1 : "<<p+1;
    cout<<"\n*(p+1) : "<<*(p+1);
    cout<<"\n&p[1][0]: "<<&p[1][0];
    cout<<"\n*(p+1)+2 : "<<*(p+1)+2;
    
    cout<<endl;
    return 0; 
}