#include <stdio.h>
#include <string.h>

main()
{
    char a[100];
    int i,v=0,c=0,s=0;
   puts("enter a string");
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
   if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
   v++;
   else
   c++;
   }
   printf("\n no of vowels=%d",v);
   printf("\n no of consonant=%d",c);
   }
