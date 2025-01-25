#include <stdio.h>
#include <string.h>
main()
{
    char a[10];
    int i;
   printf("enter a string");
  scanf("%s",a);
  for(i=strlen(a)-1;i>=0;i--)
   printf("%c",a[i]);
   }
