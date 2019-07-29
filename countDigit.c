#include<stdio.h>

int main()
{
    int n,d,sum,count=0;
    scanf("%d%d",&n,&d);
    while(n>0)
    {
        sum=n%10;
        if(sum==d)
        {
        count++;
        }
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
