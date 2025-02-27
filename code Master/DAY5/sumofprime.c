#include<stdio.h>
int main ()
{
int upper, lower,i,sum=0,f=0;
printf("enter lower limit and\n upper limit");
scanf("%d\n%d",&lower,&upper);
while(lower<=upper)
   for(i=2;i<=lower/2 ;i++)
   {
    if(lower%i==0)
       {
           f=1;
           break;
       }

         if(f==0)
        {
            sum=sum+lower;
            printf("sum of prime no =%d",lower);

        }
        lower++;
    }
    printf("sum of prime no =%d",sum);
}
