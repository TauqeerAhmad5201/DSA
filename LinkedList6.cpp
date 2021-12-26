// Printing LinkedList in reverse order 
include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
}
void print(struct Node* p)
{
    if (p==NULL) return;
    print(p->next);
    cout<<""<<p->data;
}
int main()
{
    struct Node* head = NULL;
    print(head);

}