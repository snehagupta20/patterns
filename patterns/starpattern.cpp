/*
--*
-***
*****
*****
-***
--*

2,1,0: n=3
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<"\n";

    }

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<"\n";

    }
}