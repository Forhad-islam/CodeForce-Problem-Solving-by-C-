#include<iostream>
#include<string>
#include<ctype.h>
#include<algorithm>
using namespace std;
int main()
{
    string num;int count=0;
    getline(cin,num);
    string num1;
    for(int i=0; i<num.size()-1;i++ )
    {
        if(num[i]!='{'&&num[i]!=','&&!isspace(num[i]))
           {
            num1+=num[i];
           }
    }
    sort(num1.begin(),num1.end());
   cout<<num1;

}
