#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int mi[n];
    int ci[n];
    int countmi=0;
    int countci=0;
    for(int i=0; i<n; i++)
    {
        cin>>mi[i]>>ci[i];
        if(mi[i]>ci[i])
        {
            countmi++;
        }
        if(ci[i]>mi[i])
        {
            countci++;
        }
    }

    if(countmi>countci) cout<<"Mishka"<<endl;
    else if(countci>countmi) cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

}
