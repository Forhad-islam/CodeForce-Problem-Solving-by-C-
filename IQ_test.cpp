#include<iostream>
using namespace std;
int main()
{
    int n,j=0,b=0;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        if(num[i]%2==0)j++;
        else b++;

    }
    if(j>b)
    for(int i=0;i<n;i++)
    {
        if(num[i]%2!=0)
        {
            cout<<i+1;
            return 0;
        }
    }
   else
    for(int i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            cout<<i+1;
            return 0;
        }
    }

}
