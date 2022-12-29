/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
butterfly pattern
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k,a=1,b,c,d,e,f,g;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=1;k<=(2*n-2*a);k++)
        {
            cout<<" ";
        }
        a++;
        for(b=1;b<=i;b++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    e=n;
    for(c=n;c>=1;c--)
    {
        for(d=c;d>=1;d--)
        {
            cout<<"*";
        }
        for(f=(2*n-2*e);f>=1;f--)
        {
            cout<<" ";
        }
        e--;
       for(g=c;g>=1;g--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
