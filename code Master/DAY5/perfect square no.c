#include<stdio.h>
#include<math.h>
int main()
{
int  i,n;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=(n/2)+1;i++)
{
    if(n==(i*i))
        {
     printf("it is perfect  square no");
     return 0;
       }
}
printf("it is  not perfect square no");
}
