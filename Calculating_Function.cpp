#include<iostream>
using namespace std;
int main()
{
    int long long num,d;
    cin>>num;
      if(num%2 ==0)
      {
          cout<<num/2;
      }
      else
      {
          d=-(num/2 +1);
          cout<<d;
      }
}
