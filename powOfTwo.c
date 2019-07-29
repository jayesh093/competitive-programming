#include<stdio.h>
#include<math.h>
int main()
{
    int no;
    int i=1,flage=0;
    scanf("%d",&no);
    if(no%2==0)
    {
        while(no>=pow(2,i))
        {
            if(no==pow(2,i))
            {
                flage=1;
                break;
            }
            i++;
        }
        if(flage==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
