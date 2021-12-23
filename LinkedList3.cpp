// #Inserting Node at nth location
#include<iostream>
using namespace std;
struct Node {
    int Data;
    struct Node* next;    // created a node template

};
struct Node* head;   //head global variable
void Insert(int data, int n){
    Node *temp1 = new Node();

    temp1-> Data = data;
    temp1-> next = NULL; 
    if(n==1){
        temp1->next = head;
        head = temp1;
        return ;
    }
    Node *temp2 = head;
    for(int i=0; i<n-2; i++)                            // traversing the list 
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void Print()
{
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->Data;
        temp = temp->next;
    }
    cout<<"\n";
}
int main()
{
    Insert(6,1);
    Insert(7,2);
    Insert(10,1);
    Print();

    return 0;
}
