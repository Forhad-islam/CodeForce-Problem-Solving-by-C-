#include<iostream>
using namespace std;
int main()
{
    int k;cin>>k;
    int a=0,b=0,c=0;
    int num[100][100];
    for(int i=0;i<k;i++)
    {
       for(int j=0;j<3;j++)
       {
           cin>>num[i][j];
       }
    }

for(int i=0;i<k;i++)
    {
       for(int j=0;j<3;j++)
        {
            a=a+num[i][j];
            b=b+num[i][1];
            c=c+num[i][2];
        }

    }
   if(a==0 && b==0 && c==0){cout<<"YES";}
   else {cout<<"NO";}
}
