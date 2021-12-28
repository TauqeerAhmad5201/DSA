// Printing LinkedList in reverse order 
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void print(struct Node* p)
{
    if (p==NULL) return;
    
    print(p->next);
    cout<<""<<p->data;
    
    cout<<endl;
}
void Insert(int data, int loc){

    Node *temp1 = new Node();

    temp1 -> data = data;
    temp1 -> next = NULL;

        if (loc==1) {
            temp1->next = head;
            head = temp1;
            return; 
        }
        Node *temp2 = head;
        for(int i=0 ; i<loc-2; i++)
        {
            temp2 = temp2->next;
        }

        temp1->next  = temp2-> next;
        temp2 ->next = temp1;
}
int main()
{
    
    Insert(5,1);
    Insert(7,2);
    print(head);
    return 0;

}