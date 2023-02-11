#include<iostream>
using namespace std;
int main()
{
   int n,t;
   int police=0,crime=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>n;
       if(n>0)
       {
           police=police+n;
       }
       else if(n<0)
       {
           if(police>0)
           {
               police=police-1;
           }
           else
           {
               crime=crime+1;
           }
       }

   }

   cout<<crime<<endl;
}
