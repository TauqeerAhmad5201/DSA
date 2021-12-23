// #inserting at random 
#include<iostream>

using namespace std;
struct Node {          //created a node 
    int data;
    struct Node* next;
};
struct Node *head; //global variable

void Insert(int data, int n)
{
    Node *temp1 = (Node*)malloc(sizeof(struct Node));

    temp1->data = data;
    temp1->next = NULL;

    if(n==1){
        temp1->next = head;
        head = temp1;
        return ;
    }
    Node *temp2 = head;
    for(int i=0 ; i<n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
int main()
{
    head = NULL;
    Insert(3,1);  // Insert(data,index)
    Insert(2,3);

    Print();
    return 0;
}