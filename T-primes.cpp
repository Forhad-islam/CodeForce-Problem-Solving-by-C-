#include<iostream>
using namespace std;

int main()
{
    int long long a;

    cin>>a;

    int arr[a],count=0;

    for(int i=0;i<a;i++)
        cin>>arr[i];

    for(int i=0; i<a; i++)
    {
        for(int j=1;j<=arr[i];j++)
        {
            if( j % arr[i]==0)
           {
              count++;
           }

        }
       if(count==3){cout<<"YES"<<endl;}
       else {cout<<"NO"<<endl;}

    }


}
