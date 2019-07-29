#include<stdio.h>

int main()
{
    int no,i,j,temp,flage=0;
    scanf("%d",&no);
    int arr[no];
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<no;i++)
    {
        for(j=i+1;j<no;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<no-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            flage=1;
            break;
        }
    }
    if(flage==0)
        printf("YES \n");
    else
        printf("NO");
    return 0;
}
