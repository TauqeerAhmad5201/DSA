// Reversing a linkedlist  iterative method 
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
void Reverse(){
    // struct Node *temp1 = (Node*)malloc(sizeof(struct Node));  //No because Node is already created just reverse
    struct Node *current, *prev, *next;

    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

     head = prev;

}
int main()
{
    Reverse();
    return 0;
} 