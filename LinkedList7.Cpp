// Doubly LinkedList
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head; //global
struct Node* GetNewNode(int x){
    Node *newnode = new Node();

   newnode->data = x;
   newnode-> prev = NULL;
   newnode-> next = NULL;
    return newnode;
}

void InsertAtHead(int x){
    struct Node *newnode = GetNewNode(x);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
     head -> prev = newnode;
     newnode-> next = head;
     head = newnode;
}
void Print(){
    struct Node *temp = head;
    if(temp==NULL) return; //empty list

    //Going to last Node
    while(temp->next != NULL){
         temp = temp->next;
    }
    //Traversing backward using prev pointer
    cout<<"Reverse : ";
    while(temp != NULL){
        cout<<" "<<temp->data;
        temp = temp->prev;
    }
    cout<<"\n";
}
int main()
{
    return 0;
}