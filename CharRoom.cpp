#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=0,b=0;
    string k="hello";
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]==k[b])
        {
            b++;
            a++;
        }
    }
    if(a==5)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}
