#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,anton=0,danik=0;
    cin>>a;
    string num;
    cin>>num;

    for(int i=0;i<a;i++)
    {
        if(num[i]=='A')
        {
            anton++;
        }
        else if(num[i]=='D')
            danik++;
    }

    if(anton>danik)
    {
        cout<<"Anton";
    }
    else if(danik>anton)
    {
        cout<<"Danik";
    }
    else if(danik==anton)
        cout<<"Friendship";

}

