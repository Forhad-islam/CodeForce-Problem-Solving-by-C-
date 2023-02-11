#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,count=0;
     cin>>a;
     string num;
     cin>>num;

     for(int i=0;i<a;i++)
     {
       num[i]= tolower(num[i]);
     }
     sort(num.begin(),num.end());
     for(int i=0;i<a;i++)
     {
         if(num[i]!=num[i+1])
         {
             count++;
         }
     }
     if(count==26)
        cout<<"YES";
     else
        cout<<"NO";
}
