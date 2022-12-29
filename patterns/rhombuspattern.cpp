/*
----*****
---*****
--*****
-*****
*****
rhombus pattern, (-): black space
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=(n-i);j>=1;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}