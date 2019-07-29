#include<stdio.h>

int main()
{
    int no,sum=0;
    int i;
    scanf("%d",&no);
    while(sum<no)
    {
        for(i=1;i<=3;i++)
        {
            if(sum<no)
            {
                sum+=i;
            }
            else
            {
                break;
            }
        }
    }
    if(sum==no)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
