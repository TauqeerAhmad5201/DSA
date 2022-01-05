#include<iostream>
using namespace std;
#define N 5 
int queue[N];
int front = -1; 
int rear = -1; 

void enqueue(int x){
    if(rear == N-1){
        cout<<"Overflow"; 
    }
    else if (front == -1 && rear == -1){
        front = rear = 0; 
        queue[rear ] = x;          //enqueue will always from rear 
    }
    else {
        rear++; 
        queue[rear] = x;
    }
}
void dequeue( ){
    if(front == -1 && rear == -1 ){
        cout<<"Nothing out here "; 
    }
    else if (front == rear){
        front = rear = -1;
    }
    else {
        
        cout<<"data before Dequeue : "<<queue[front];
        cout<<endl;
        front++;
    }
}
void display(){
     
    if (front ==-1 && rear == -1 ){
        cout<<"Nothing to display ";
    }
    else {
        for (int i = front; i < rear +1; i++){
            cout<<"\nPrinting data of queue : "<<queue[i];
        }
    }
}
void Peek(){
      if (front ==-1 && rear == -1 ){
        cout<<"Nothing to display ";
    }
    else {
        cout<<"Data a front : "<<queue[front]; 
         }
}
int main(){
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display;
    Peek();
    dequeue();
    Peek();
    display();
    return 0;
}