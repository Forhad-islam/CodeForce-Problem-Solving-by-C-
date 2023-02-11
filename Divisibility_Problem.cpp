#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int long long a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
        cout<<b-(a%b)<<endl;

    }

}
