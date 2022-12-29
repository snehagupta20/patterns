/*
    *       *
  *   *   *   *
*       *       *
n=9( 9 stars forming a zig zag pattern)
rows:3; columns:9

  *   *
 * * * *
*   *   *

rows:always be 3; column would chamge; column number= number of stars!
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number of stars you want in the zic zac pattern:";
    cin>>n;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%4==0 || (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}