#include<iostream>
using namespace std;

#define MAX 1000

class Stack{
    int top;
public:
    int a[MAX];
    Stack(){top=-1;}
    void push(int x);
    void pop();
    void peep();
    void display();
    bool isEmpty();
    bool isFull();
};
void Stack::push(int x){
    if(isFull()){
        cout<<"Stack OverFlow"<<endl;
    }else{
    top++;
    a[top]=x;
    cout<<x<<" pushed into stack"<<endl;
    }
}
bool Stack::isFull(){
    if(top>=MAX-1){
    return true;
    }else{
    return false;
    }
}

bool Stack::isEmpty(){
    if(top<0){
    return true;
    }else{
    return false;
    }
}

void Stack::pop(){
    if(isEmpty()){
        cout<<"Stack is Empty/Underflow"<<endl;
    }else{
        int x=a[top];
        top--;
        cout<<x<<" Popped from stack"<<endl;
    }
}
void Stack::peep(){
    if(isEmpty()){
        cout<<"Stack is Empty/Underflow"<<endl;
    }else{
        cout<<"Top of this stack is:"<<a[top]<<endl;
    }
}
void Stack::display(){
    if(isEmpty()){
        cout<<"Stack is Empty/Underflow"<<endl;
    }else{
        cout<<"Display the stack"<<endl;
     for(int i=0;i<=top;i++)
        cout<<a[i]<<" ";
    }
}
int main(){
Stack s;
s.push(10);
s.pop();
s.display();
return 0;
}
