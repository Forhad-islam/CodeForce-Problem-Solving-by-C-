#include<iostream>
using namespace std;
int main()
{
    int a,count1=0,count2=0,count3=0,count4=0,mini,maxi;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            count1++;
        }
         if(arr[i]==2)
        {
            count2++;
        }
         if(arr[i]==3)
        {
            count3++;
        }
         if(arr[i]==4)
        {
            count4++;
        }
    }
    mini=count4;
    if(count1!=0 && count3!=0)
    {
        mini=mini+1;
        count1=count1-1;
        count3=count3-1;
    }
    if(count1==0;count3!=0)
    {
        mini=mini+count3;
        count3=0;
    }
    mini=mini+count2/2;
    if(count2%2!=0)
    {
        if(count1<=2)
        {
            mini=mini+1;
            count2=0;
            count1=0;
        }
        else
        {
            count1=count1-2;
            count2=0;
            mini=mini+1;
        }
    }
    if(count1!=0)
    {
        mini=mini+count1/4;
    }

}
