#include<iostream>
using namespace std;
void swapvalue(int x,int y)
{
    int a;
    a=x;
     x=y;
     y=a;
     cout<<"Number is:"<<x<<","<<y<<endl;


}
int main()
{
    int a,b;
    cout<<"Enter your number:";
    cin>>a>>b;
    cout<<endl;
    swapvalue(a,b);
}
