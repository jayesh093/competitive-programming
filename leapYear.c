#include<stdio.h>

int main()
{
    int year,no;
    scanf("%d",&year);
    no=year%100;
    if(no%4==0)
    {
        printf("YES if given year N is a leap year");
    }
    else
        {
            printf("NO if given year N is not a year");
        }
    return 0;
}
