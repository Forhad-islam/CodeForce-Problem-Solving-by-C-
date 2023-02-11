#include<iostream>
using namespace std;
int main()
{
    int a,total=0,num,k;
    cin>>a;
 while(a!=0)
 {
     k=a%10;
     num=a/10;
     a=num;
     int n=0;
     n=n+1;
     if( (n==1) || (n==5)) {

        total+=k;

     }

 }
cout<<total;
 return 0;

}
