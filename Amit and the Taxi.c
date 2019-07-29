#include<stdio.h>
#include<math.h>

int main()
{
    float N,V1,V2;
        scanf("%f%f%f",&N,&V1,&V2);
        (N/(sqrt(2)*V1))>(N/V2)?printf("Taxi"):printf("Walk");
    return 0;
}
