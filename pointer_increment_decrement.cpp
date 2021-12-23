#include<iostream>
using namespace std;
int main()
{
   int a[5] = {5,12,3,4,6};
   int *p = &a[0];

//    cout<<"*++p : "<<*++p;     // Output - > 12
//    cout<<endl;
   cout<<*p++;                   // Output - > 5 
   cout<<endl; 
      return 0;
   
}