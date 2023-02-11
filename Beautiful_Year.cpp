#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    for(;;)
    {
       year++;
       int b=year/1000;
       int c=(year/100)%10;
       int d=(year/10)%10;
       int e=year%10;
       if(b!=c && b!=d && b!=e && c!=d && c!=d && c!=e && d!=e)
       {
           break;
       }

    }
    cout<<year;
    return 0;
}
