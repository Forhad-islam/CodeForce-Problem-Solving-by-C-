#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int long long n,s;
   int count=0;
   cin>>n>>s;
   int long long a[2*s];
   for(int i=0,j=0; i<s; i++)
   {
       cin>>a[j]>>a[j+1];
       j+=2;
   }

   cout<<"start:"<<endl;
    sort(a,a+(2*s));
   for(int j=0; j<(2*s); j+=2)
   {

      cout<<a[j]<<" "<<a[j+1]<<endl;

   }
   /*
   for(int i=0;i<s; i++)
   {
    int long long c,d;   cin>>c>>d;
    if(c>d)
    {
       swap(c,d);
    }
    if(n>c)
    {
        n+=d;
        continue;
    }
    else {count++;}

   }
   if(count==0)
   {
       cout<<"YES";
   }
   else cout<<"NO";*/

}
