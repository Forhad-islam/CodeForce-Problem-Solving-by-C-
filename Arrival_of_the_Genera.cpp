#include<iostream>
using namespace std;
int main()
{
 int n,mi=101,ma=0,maxi,mini;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
     if(arr[i]>ma)
     {
         ma=arr[i];
         maxi=i;
     }
     if(arr[i]<=mi)
     {
         mi=arr[i];
         mini=i;
     }
 }
 if(maxi>mini)
 {
     mini++;
 }
 cout<<(n-1)+maxi-mini;

}
