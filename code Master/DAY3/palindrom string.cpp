#include <stdio.h>
#include <string.h>
  using namespace std;
main()
{
    char a[100],b[100];
    int x;
   puts("enter a string");
   gets(a);
   strcpy(b,a);
   strrev(b);
   x=strcmp(a,b);
   if(x==0)
   printf("palindron string");
   else
   printf("not a palindrom");
   }
