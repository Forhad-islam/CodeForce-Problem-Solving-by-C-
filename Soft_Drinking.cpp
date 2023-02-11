#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a,a1,a2,a3,a4;
     a=(k*l)/nl ;
     a2 = c*d;
     a3=p/np;
     a4= min( min(a,a2),a3) /n;
      cout<<a4<<endl;

}
