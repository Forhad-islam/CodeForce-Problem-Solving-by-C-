#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int aray[a];
    for(int i=0;i<a;i++)
    {
       cin>>aray[i];
    }
    for(int j=1;j<=a;j++)
    {
        for(int i=0;i<a;i++)
         {
             if(aray[i]==j)
             {
                 cout<<i+1<<" ";
             }
         }
    }
}
