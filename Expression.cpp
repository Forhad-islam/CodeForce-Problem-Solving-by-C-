#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[6];
    arr[0]=a+(b*c);
    arr[1]=(a*b)+c;
    arr[2]=a*(b+c);
    arr[3]=(a+b)*c;
    arr[4]=a*b*c;
    arr[5]=a+b+c;
    int ans= max(arr[5],max(arr[4],max(arr[3],max(arr[2],max(arr[0],arr[1])))));

   cout<<ans;
}
