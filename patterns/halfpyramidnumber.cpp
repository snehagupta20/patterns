/* 
1
22
333
4444
55555
half pyramid using numbers */

#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}