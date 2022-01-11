// #Queue using LinkedList
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        cout << "Please initialize something";
    }
    else
    {
        temp = front;

        while (temp != 0)
        {
            cout << "Data in Queue : \n"
                 << temp->data;
            temp = temp->next;
        }
    }
    void dequeue()
    {
        struct node *temp;
        temp = front;
        if (front == 0 && rear == 0)
        {
            cout << "Please initialize something";
        }
        else
        {
            cout << "Dequeued Data : " << front->data;
            front = front->next;
            free(temp);
        }
    }
    void Peek()
    {
        if (front == 0 && rear == 0)
        {
            cout << "Please initialize something";
        }
        else
        {
            cout << "Peek data : " << front->data;
        }
    }
    int main()
    {
        enqueue(5);
        enqueue(6);
        enqueue(0);
        display();
        dequeue();
        Peek();

        return 0;
    }
    