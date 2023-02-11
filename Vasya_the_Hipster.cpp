#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>b)
    {
        c=a-b;
        if(c%2==0)
        {
            cout<<b<<" "<<c/2<<endl;
        }
        else
        {
            cout<<b<<" "<<c/2<<endl;
        }
    }
    else
    {
        c=b-a;
        if(c%2==0)
        {
            cout<<a<<" "<<c/2<<endl;
        }
        else
        {
            cout<<a<<" "<<c/2<<endl;
        }
    }
}
