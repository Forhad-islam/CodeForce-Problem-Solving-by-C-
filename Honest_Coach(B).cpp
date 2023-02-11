#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int k=  arr[n-1];
    for(int i=1; i<n;i++)
    {
        /*if(arr[i-1]== arr[i])
        {
           // k=i;
            //l=i+1;
            cout<<arr[i-1]-arr[i]<<endl;
            break;
        }*/
       if(k> arr[i+1]-arr[i])
       {
           k=arr[i+1]-arr[i];
       }




    }

   cout<<k<<endl;


}
