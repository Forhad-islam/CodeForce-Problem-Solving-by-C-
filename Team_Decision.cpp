#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,k=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b;
        cin>>c;
        cin>>d;

     if( ( (b==1) && (c==1) && (d==1) ) || ( (b==1) && (c==1) && (d==0) )  ||
         ( (b==0) && (c==1) && (d==1) ) || ((b==1 && c==0 && d==1))   )
        {
           k=k+1;
        }

    }
 cout<<k<<endl;
return 0;
}
