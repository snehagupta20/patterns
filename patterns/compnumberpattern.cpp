/*
----1----
---1-2---
--1-2-3--
-1-2-3-4-
1-2-3-4-5
complex number pattern; (-):blanck space;
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k,a;
    cout<<"number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=(n-i);j>=1;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }
}