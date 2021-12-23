// Deleting a node from nth index
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node* head; 
void Delete(int n)
{
    struct Node *temp = head;
    if (n==1){
         head = temp->next;
         free(temp);
         return;
    }
    for(int i=0; i<n-2; i++)
    {
        temp = temp->next;
    }
    struct Node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2); 
}
int main()
{
    Delete(2);
    return 0;
}