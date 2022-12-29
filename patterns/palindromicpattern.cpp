/*
--------- -1-----
------- -2-1-2----
----- -3-2-1-2-3---
--- -4-3-2-1-2-3-4--
- -5-4-3-2-1-2-3-4-5
 6-5-4-3-2-1-2-3-4-5-6
palindromic pattern
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k,a;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(k=i;k>=1;k--)
        {
            cout<<k;
        }
        for(a=2;a<=i;a++)
        {
            cout<<a;
        }
        cout<<"\n";
    }
}