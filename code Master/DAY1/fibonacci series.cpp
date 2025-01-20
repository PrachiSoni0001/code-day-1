#include <iostream>
  using namespace std;
main()
{
    int a=-1,b=1,c,i;
   for(i=1;i<=10;i++)
   {
   c=a+b;
   cout<<c<<"\t";
   a=b;
   b=c;
   }
   }

