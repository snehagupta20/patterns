/*
*****
****
***
**
*
decreasing order; number of rows and column from user.
smart method, i earased my old one, wasnt worth it 
*/

#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}