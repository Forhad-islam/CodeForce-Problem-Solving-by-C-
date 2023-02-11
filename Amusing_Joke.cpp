#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num,num1,k,num2;
    cin>>num>>num1;
     k=num+num1;
     sort(k.begin(),k.end());
     cin>>num2;
     sort(num2.begin(),num2.end());
     if(k==num2)
     {
         cout<<"YES"<<endl;
     }
     else
        cout<<"NO"<<endl;
}
