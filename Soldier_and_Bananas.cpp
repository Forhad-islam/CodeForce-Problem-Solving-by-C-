#include<iostream>
using namespace std;
int main()
{
   int k,n,w;
   cin>>k>>n>>w;
   int count=0;
   for(int i=1;i<=w;i++)
   {
       count=count+i;
   }
    int d=(count*k)-n;
    if(d<0) cout<<"0";
    else cout<<d;
}
