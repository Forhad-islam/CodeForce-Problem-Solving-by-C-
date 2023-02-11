#include<iostream>
#include<string>
using namespace std;
int main()
{
    string num;
    cin>>num;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]=='W'&&num[i+1]=='U'&&num[i+2]=='B')
        {
           i=i+2;
           cout<<" ";
        }
        else
        {
            cout<<num[i];
        }
    }
}
