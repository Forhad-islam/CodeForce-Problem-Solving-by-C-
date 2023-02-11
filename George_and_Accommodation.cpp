#include<iostream>
using namespace std;
int main()
{
    int a,b=0;
    cin>>a;
    int p,q;
    for(int i=1;i<=a;i++)
    {
        cin>>p>>q;
        if(q-p>=2)
        {
            b++;
        }
    }
    cout<<b;
}
