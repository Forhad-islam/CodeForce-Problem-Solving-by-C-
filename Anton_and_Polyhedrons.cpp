#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cin>>a;
    string num;
    for(int i=0;i<a;i++)
    {
        cin>>num;
        if(num=="Tetrahedron")
        {
            count=count+4;
        }
        else if(num=="Cube")
        {
            count=count+6;
        }
        else if(num=="Octahedron")
        {
            count=count+8;
        }
        else if(num=="Dodecahedron")
        {
            count=count+12;
        }
        else if(num=="Icosahedron")
        {
            count=count+20;
        }
    }

    cout<<count<<endl;
}

