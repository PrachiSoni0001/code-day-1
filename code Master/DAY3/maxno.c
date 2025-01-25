#include <stdio.h>

main()
{
int a[]={32,4,66,25,70,01};
int i,max=0;
for(i=0;i<6;i++)
{
if(a[i]>max)
max=a[i];
}
printf("\n largest=%d",max);
}
