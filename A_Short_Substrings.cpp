#include<iostream>
using namespace std;
int main()
{
    int a;cin>>a;
    for(int j=0;j<a;j++)
    {
        string name,name1="";
    cin>>name;
    int length = name.size();

    for(int i=0; i<length;i++)
    {
        if(i%2==0 && i<=(length-2))
        {
            name1+=name[i];
        }
        else if(i>(length-2))
        {
            name1+=name[i];

        }

    }
    cout<<name1<<endl;

    }


}
