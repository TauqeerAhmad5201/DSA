// Reversing a string using stack. 
#include<stack>
#include<iostream>
#include<string.h>
using namespace std;
void Reverse(char *C, int n)
{
      stack<char> S;
      //loop for push 
      for(int i=0; i<n; i++){
          S.push(C[i]);
      }
      for(int i=0; i<n; i++){
          C[i] = S.top();
          S.pop();
      }
}
int main(){
    char C[51];
    cout<<"Enter a string : \n";
    gets(C);
    cout<<"Output : "<<C[2];
    Reverse(C, strlen(C));
    cout<<"Output Reverse : "<<C;
}