#include<stdio.h>
#include<stdlib.h>
int a=1;
/* Link list node */
struct Node
{
    int data;
    struct Node* next;
}*prev;
// You are supposed to implement following three functions

push(struct Node** head_ref, int new_data)
{

    if(a==1){
            prev=null;
            a++;
    }
    struct Node* new_node=( struct Node*)malloc(sizeof( struct Node*));
    new_node->data=new_data;
    new_node->next=prev;
    prev=new_node;
}
reverse(struct Node** head_ref)
printList(struct Node *head);


int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
   	 int a,x,i;
   	 scanf("%d",&a);
   	 for(i=0; i<a; i++){
   	 	scanf("%d",&x);
   	 	push(&head, x);
   	 }


    reverse(&head);
     //printList(head);
     //getchar();
}
