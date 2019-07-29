#include<stdio.h>
#include<math.h>
int main()
{
    int no,sum=0,count=0;
    double p;
    int no1,no2;
    scanf("%d",&no);
    no1=no2=no;
    while(no>0)
    {
        no=no/10;
        count++;
    }
   p=pow(10,count-1);
   while(no1>0)
   {
       sum+=p*(no1%10);
       no1=no1/10;
       p=p/10;

   }
   if(sum==no2)
   {
       printf("YES");
   }
   else
   {
      printf("NO");
   }
}
