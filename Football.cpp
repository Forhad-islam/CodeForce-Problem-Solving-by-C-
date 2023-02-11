#include <iostream>
#include<string>
using namespace std;
int main()
{
string num;int x=0,y=0,z=0;
cin>>num;
for(int i=0;i<num.size();i++)
  {
     if(num[i]=='0')
     {
       x++;y=0;
     }
     else
     {
        y++;x=0;
     }
     if(x==7 || y==7)
     {
       z=1;
     }
  }
if(z==1)
{
cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;
}
