/* ****
   *  *
   *  *
   ****
   hollow recatangle 
   my own first time method */

#include <iostream>
using namespace std;

int main()
{
    int i,j,a,k,row,column;
    cout<<"enter the number of rows:";
    cin>>row;
    cout<<"enter the number of columns:";
    cin>>column;

    for(j=1;j<=column;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
    for(i=1;i<=row;i++)
    {
        cout<<"*";
        for(k=1;k<=column-2;k++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
    for(a=1;a<=column;a++)
    {
        cout<<"*";
    }
}
