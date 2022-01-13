// Circular Enqueue
#include<iostream>
#define N 5
int queue[N];
int front = -1; 
int rear = -1;

void enqueue(int x){
    
    if(front == -1 && rear == -1){
        front = rear=0;
        queue[rear]= x;
    }
    else if((rear + 1)%N)==front){
        cout<<"Queue is full "<<endl;
    }
    else {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }

}
void dequeue(){
    if(front == -1 && rear == -1){
        cout<<"Nothing in queue";
    }
    else if (front == rear){
        front = rear = -1;
    }
    else {
        cout<<"Dequeued Element : "<<queue[front];
        front = (front+1)%N; 
    }

}
void display(){
    int i = front;
    if (front ==-1 && rear == 01){
    cout<<"Queue is empty";
    }
    else {
        cout<<"Queue is : \n";
        while(i != rear){
            cout<<queue[i]<<endl;
            i = (i+1)%N;
        }
        cout<<queue[rear];
    }
}
void Peek(){
    if (front ==-1 && rear == 01){
    cout<<"Queue is empty";
    }
    else {
        cout<<queue[front];
    }
}
int main(){

    enqueue(2);
    enqueue(3);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    Peek();
    return 0;
}