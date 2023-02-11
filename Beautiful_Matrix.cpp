#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,l,m,n;
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]!=0)
            {
               k=i+1;l=j+1;
            }
        }
    }
    m=3-k;
    m=abs(m);
    n=3-l;
    n=abs(n);
    cout<<m+n<<endl;

}
