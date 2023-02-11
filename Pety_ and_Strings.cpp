#include<iostream>
#include<string>
using namespace std;
int main()
{
   string st1,st2;
   cin>>st1;
   cin>>st2;
   int a=st1.size();
   for(int i=0;i<a;i++)
   {
       st1[i]=tolower(st1[i]);
       st2[i]=tolower(st2[i]);
   }
   if(st1==st2){cout<<"0"<<endl;}
   else
   {
       for(int i=0;i<st1.size();i++)
       {
           if(st1[i]>st2[i]){cout<<"1"<<endl;break;}
           if(st1[i]<st2[i]){cout<<"-1"<<endl;break;}
       }
   }
}
