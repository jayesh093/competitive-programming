#include<iostream>
using namespace std;

class Queue{
    protected:
    int rear,front;
    int size;
    int *arr;

    public:
        Queue(int s){
            front=rear=-1;
            size=5;
            arr=new int[s];
        }
        void enQueue(int x);
        void deQueue();
        void display();
};

void Queue::enQueue(int value){
    if((front==0 && rear==size-1)||(rear==front-1)){
        cout<<"Queue is full"<<endl;

    }else if(front==-1){
        front=rear=0;
        arr[rear]=value;
    }else if(rear==size-1 && front!=0){
        rear=0;
        arr[rear]=value;
    }else{
        rear++;
        arr[rear]=value;
    }
}
void Queue::deQueue(){
    if(front==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        int data=arr[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }else if(front==size-1){
            front=0;
        }else{
        front++;
        }
        cout<<"Deleted value is: "<<data<<endl;
    }
}
void Queue::display(){
    if(front==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Display node : ";
        if(rear>=front){
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }else{
            for(int i=front;i<size;i++){
                cout<<arr[i]<<" ";
            }
            for(int i=0;i<=rear;i++){
                cout<<arr[i]<<" ";
            }

        }
        cout<<endl;
    }
}
int main()
{
    Queue q(5);
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);
    q.display();

    q.deQueue();
    q.deQueue();
    q.display();

    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);
    q.enQueue(500);
    q.display();


    return 0;
}



