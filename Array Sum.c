#include<stdio.h>
int i;
int sumprefix(int t,int arr[])
{
    int sum=0;
    for(i=1;i<=t;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int sumsuffix(int t,int no,int arr[])
{
    int a=no-t+1;
    int sum=0;
    i=no;
    while(a>0)
    {
        sum+=arr[i];
        i--;
        a--;
    }
    return sum;

}
int main()
{
    int no,j,k,min;
    scanf("%d",&no);
    int arr[no];
    int arr1[no];
    for(i=1;i<=no;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<=no;j++)
    {
        arr1[j]=sumprefix(j,arr)+sumsuffix(j,no,arr);

    }
    min=arr1[1];
    for(k=2;k<=no;k++)
    {
        min=(min<arr1[k])?min:arr1[k];
    }

    for(i=1;i<=no;i++)
    {
        if(min==arr1[i])
        {
        printf("%d\n",i);
        break;
        }
    }
    return 0;
}
