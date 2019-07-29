#include<iostream>
using namespace std;

#define size 3
class Queue{
    protected:
    int rear;
    int front;
    int arr[size];
    public:
        Queue(){
        rear=front=-1;
        }
    void enQueue(int x);
    void deQueue();
    void display();
};
void Queue::enQueue(int val){
    if(front==-1){
        front++;
    }
    if(rear==size-1){
        cout<<"Queue is Full "<<endl;
    }else{
        arr[++rear]=val;
        cout<<"Insert values is : "<<val<<endl;
    }
}
void Queue::deQueue(){
    if(front>rear || rear==-1){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Values is deQueue is : "<<arr[front]<<endl;
        front++;
    }
}
void Queue::display(){
cout<<"Display Simple Queue "<<endl;
    if((front>rear)||(rear==-1)){
        cout<<"Queue is Empty "<<endl;
    }else{
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
Queue q;
q.deQueue();
q.display();
q.enQueue(10);
q.display();
q.enQueue(20);
q.enQueue(30);
q.enQueue(40);
q.display();
q.deQueue();
q.deQueue();
q.deQueue();
q.display();
return 0;
}
