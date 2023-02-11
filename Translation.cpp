#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st1,st2;
    cin>>st1>>st2;
    reverse(st1.begin(),st1.end());
    if(st1==st2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
