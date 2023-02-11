#include<iostream>
using namespace std;

void solve(int long long a,int long long b)
{
    int long long ans,d;
    if(a==b){cout<<"0"<<endl;}
    else if(a<b){solve(b,a);}
    else
    {
        d = a-b;
        if(d % 10 == 0)
        {
            cout<<d/10<<endl;;
        }
        else
        {
            /*
            condition ? value_if_true : value_if_false
            if(a < b)
    return a;
else
    return b;
    */

            ans= (d/10)+((d%10)<=10 ? 1: (d%10));
            cout<<ans<<endl;
        }
    }

}

int main()
{
    int l;
    cin>>l;
    while(l>0)
    {
       int long long a,b;
      cin>>a>>b;
      solve(a,b);
      l--;
    }

}
