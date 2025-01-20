#include <iostream>
  using namespace std;
main()
{
    int n,f=0,i;
   cout<<"enter a number" ;
   cin>>n;
   for(i=1;i<=n;i++)
   {
    if(n%i==0)
    f++;
   }
    if(f==2)
        cout<<" prime no ";
    else
        cout<<" not a prime no ";
   }
