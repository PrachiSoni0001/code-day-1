#include <iostream>
  using namespace std;
main()
{
    int n,r,s=0,t;
   cout<<"enter a number" ;
   cin>>n;
   t=n;
   while(n>0)
   {
   r=n%10;
   s= s+(r*r*r);
   n=n/10;
   }
   if(s==t)
   cout<<"Armstrong number";
   else
   cout<<" not an Armstrong number";
   }
