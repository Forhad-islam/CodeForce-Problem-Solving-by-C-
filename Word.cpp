#include<iostream>
#include<string>
using namespace std;
int main()
{
    int upper=0,lower=0;
   string st;
   cin>>st;
   for(int i=0;i<st.size();i++)
   {
       if(isupper(st[i]))
       {
         upper++;
       }
       else
       {
           lower++;
       }
   }
   if(upper<=lower)
    {
         for(int i=0;i<st.size();i++)
         {
            st[i]=tolower(st[i]);
         }
         cout<<st;
    }
    else
        {
         for(int i=0;i<st.size();i++)
         {
            st[i]=toupper(st[i]);
         }
         cout<<st;
       }

}
