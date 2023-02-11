#include<iostream>
#include<string>
using namespace std;
int main()
{
   string num,num1;
   cin>>num>>num1;
   for(int i=0;i<num.size();i++)
   {
       if(num[i]==num1[i])
       {
           cout<<"0";
       }
       else
        cout<<"1";
   }
}
