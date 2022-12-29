//**** x 4 
//rows: 5; colums=4
#include <iostream>
using namespace std;
int main()
{
    int i,row,column,j;
    char a;
    cout<<"enter the number of rows you want in the pattern";
    cin>>row;
    cout<<"enter the number of columns you want in the pattern";
    cin>>column;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}