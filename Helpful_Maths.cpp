#include<iostream>
#include<string>
using namespace std;
int main()
{
   string num;
   cin>>num;
   int i,j;
  for(i=0;i<num.size();i+=2)
  {
      for(j=0;j<num.size()-1;j+=2)

      {
        if(num[j]>num[j+2])
        {
            swap(num[j],num[j+2]);
        }
      }
  }
    cout<<num;
}


