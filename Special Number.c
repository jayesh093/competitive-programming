#include<stdio.h>

int main()
{
    int no,j,i,flage,store;
    scanf("%d",&no);
    flage=0;
    for(j=1;j<=no;j++)
    {
        i=j;
        if(no%i==0)
        {
            if(i%10==0 && (i==3|| i==5 || i==6))
               {
                    flage++;
                }
            else
                {
                    while(i>0)
                    {
                        if(i>9)store=i%10;
                        else
                            store=i;
                        if(store==3|| store==5 || store==6)
                        {
                            flage++;
                            break;
                        }
                        i=i/10;
                    }

                }
           }
    }
    printf("%d \n",flage);
    return 0;
}
