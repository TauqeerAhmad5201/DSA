// #Inserting at beginning
#include<iostream>

using namespace std;
void Print();
void Insert(int x);
struct Node {     //created a node 
    int data; 
    Node *next;
};

struct Node *head; //global variable
void Insert(int x)
{
    Node *temp = (Node*)malloc(sizeof(struct Node));
    // Node *temp = new Node*[sizeof(struct Node)];
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    Node* temp = head;
    cout<<"List : ";
    while(temp != NULL)
    {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    head = NULL;
    int n,x;
    cout<<"How many number?\n";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the number \n";
        cin>>x;
         Insert(x);
         Print();
    }
   
    return 0;
}