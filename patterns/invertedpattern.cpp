/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
inverted numbers pattern
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,a;
    cout<<"number of rows:";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        a=1;
        for(j=i;j>=1;j--)
        {
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
}