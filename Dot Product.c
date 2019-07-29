#include<stdio.h>

int main()
{
    int no,i,j,sum=0,temp;
    scanf("%d",&no);
    int arr1[no];
    int arr2[no];
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<no;i++)
    {
        for(j=i+1;j<no;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[j];
                arr1[j]=arr1[i];
                arr1[i]=temp;
            }
        }
    }
    for(i=0;i<no;i++)
    {
        for(j=i+1;j<no;j++)
        {
            if(arr2[i]<arr2[j])
            {
                temp=arr2[j];
                arr2[j]=arr2[i];
                arr2[i]=temp;
            }
        }
    }

    for(i=0;i<no;i++)
    {
        sum+=arr1[i]*arr2[i];
    }
    printf("%d\n",sum);
    return 0;
}
