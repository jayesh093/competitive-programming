#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
