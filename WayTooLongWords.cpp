#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string ch[a];
    for(int i=0;i<a;i++)
    {

        cin>>ch[i];
    }

    for(int i=0;i<a;i++)
    {
        if(ch[i].size()> 10)
        {
         int len= ch[i].size();
         cout<<ch[i].front()<<len-2<<ch[i].back()<<endl;
        }
        else {   cout<<ch[i]<<endl;  }

    }
    return 0;
}
