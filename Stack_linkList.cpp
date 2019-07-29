#include<iostream>
using namespace std;
#include <cstdlib>


class StackNode{
  public:
        int data;
        StackNode* next;
};

StackNode* NewNode(int data){
    StackNode* newNode=new StackNode();
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void pop(StackNode** root){
    if(root==NULL){
        cout<<"Stack Is Empty"<<endl;
    }else{
    StackNode* temp=*root;
    *root=(*root)->next;
    int popped=temp->data;
    free(temp);
    cout<<popped<<" popped from stack "<<endl;
    }
}

void peek(StackNode* root){
    if(root==NULL){
        cout<<"Stack Is Empty"<<endl;
    }else{
    cout<<endl;
    cout<<root->data<<" top of the stack "<<endl;
    }
}

void push(StackNode** root,int data){
    StackNode* newNode=NewNode(data);
    newNode->next=*root;
    *root=newNode;
    cout<<data<<" Push to Stack"<<endl;
}
void display(StackNode** root){
    cout<<endl;
    cout<<"Display the linked list"<<endl;
    StackNode* temp=*root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    display(&root);
    pop(&root);
    peek(root);
    display(&root);
return 0;
}
