#include<iostream>
using namespace std;
int main()
{
   int a[5] = {5,7,3,4,6};
   int *p, *q, l;
    
    p = &a[0];
    q = &a[3];

   cout<<"p: "<<p;
   cout<<endl;
   cout<<"q: "<<q; 
   l = q - p; 
   
   cout<<endl;
   cout<<"l: "<<l;
   cout<<endl;
   return 0;

}