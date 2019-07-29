#include <stdio.h>
typedef unsigned long long all;
all hcf(all n1, all n2);
int main()
{
   all n1, n2;
   printf("Enter two positive integers: ");
   scanf("%d %d", &n1, &n2);

   printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1,n2));
   return 0;
}

all hcf(all n1, all n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else
       return n1;
}

