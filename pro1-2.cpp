/*
#include<stdio.h>
int main()
{
    char c='a';
    int x=5,y=2;
    int z;
    switch(c){
        case 'a':
        	z=x+y;
        	printf("%d",z);
            break;
        case 'b':
        	z=x-y;
        	printf("%d",z);
            break;
        case 'c':
        	z=x*y;
        	printf("%d",z);
            break;
        default:
           printf("no value assigned");

    }
}


#include<stdio.h>
int main()
{
    int i,x=5,y;
    for(i=1;i<5;i++);
    {
        y=x*i*2;
        printf("%d\n",y);
    }
}
#include<stdio.h>
int main()
{
    int i=0;
    do{
    	printf("inside loop ");
    }while(i==1);
    printf("outside loop");
}
*/
#include<stdio.h>
int main()
{
    int i=0;
    while(i==1){
    	printf("inside loop");
    }
    printf("outside loop");
}
