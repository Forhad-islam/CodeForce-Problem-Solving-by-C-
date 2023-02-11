#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin>>a;
    if(a>=0)
    {
        cout<<a<<endl;
    }
    else
    {
        a*=-1;
        int b= a/10;
        int c= (a/100);
        int d= (a-b)/10;
        int e= (a-c)/10;
        cout<<b<<" "<<c;
    }
}
