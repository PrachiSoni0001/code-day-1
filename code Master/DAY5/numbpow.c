#include<stdio.h>
#include<math.h>
int main()
{
int base,expo,num;
printf("enter base");
scanf("%d",&base);
printf("enter exponent");
scanf("%d",&expo);
num = pow(base,expo);
printf("power of a number is= %d",num);
}
