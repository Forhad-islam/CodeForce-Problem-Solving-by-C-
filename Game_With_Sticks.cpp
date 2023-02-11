#include<iostream>
using namespace std;
int main()
{
   int a,b,i=1,count=0;
    cin>>a>>b;
    for(;;)
    {
        if(a-i==0)break;
        if(b-i==0)break;
        count++;i++;
    }
  if(count%2==0){cout<<"Akshat"<<endl;}
  else          {cout<<"Malvika"<<endl;}

}
