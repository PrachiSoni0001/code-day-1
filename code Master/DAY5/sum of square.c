#include <stdio.h>
int main()
{
int rem,n,num=0;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
num= (rem*rem)+num;
n=n/10;
}
printf("sum of square of digit=%d" ,num);

}
