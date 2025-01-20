#include <iostream>
  using namespace std;
main()
{
    int year;
   cout<<"enter a year" ;
   cin>>year;
   if( year%4==0||year%400==0)
   cout<<"leap year";
   else
   cout<<" not a leap year";
   }
