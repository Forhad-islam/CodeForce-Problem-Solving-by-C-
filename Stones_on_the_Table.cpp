#include<iostream>
#include<string>
using namespace std;
int  main()
{
    int a,b=0;
    cin>>a;
    string num;
    cin>>num;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]==num[i+1])
        {
            b++;
        }
    }
    cout<<b;
}
