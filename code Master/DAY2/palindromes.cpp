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
   s= (s*10)+r;
   n=n/10;
   }
   if(s==t
      )
   cout<<"palindrome no";
   else
   cout<<" not a palindrome number";
   }
