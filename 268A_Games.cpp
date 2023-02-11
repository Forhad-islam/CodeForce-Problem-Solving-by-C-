#include<iostream>
using namespace std;
int main()
{
    int n,count=0;cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
             if(arr[i]==arr1[j])
             {
                 count++;
             }
         }
    }
    cout<<count;
}

