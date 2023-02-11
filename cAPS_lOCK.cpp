#include<iostream>
#include<string>
using namespace std;
int main()
{   int a=0,b=0;
    string num;
    cin>>num;
    for(int i=1;i<num.size();i++)
    {
        if(islower(num[i]))
        {
            a++;
        }
    }

    for(int i=0;i<num.size();i++)
    {
        if(isupper(num[i]))
        {
            b++;
        }
    }
    if(islower(num[0]) && a==0)
    {
        num[0]=toupper(num[0]);
        for(int i=1; i<num.size();i++)
        {
            num[i]=tolower(num[i]);
        }
        cout<<num;
        return 0;
    }
    if(b==num.size())
    {
        for(int i=0;i<num.size();i++)
        {
            num[i]=tolower(num[i]);
        }
        cout<<num;
    }
    else{cout<<num;}
}
