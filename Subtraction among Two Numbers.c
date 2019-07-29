#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    while(a>0 && b>0)
    {
        if(a>=b)
            a=a-b;
        else
            b=b-a;
        c++;
    }
    printf("%d",c);
    return 0;
}
