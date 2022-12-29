/* ****
   *  *
   *  *
   ****
   hollow recatangle
   atcuall, smart method */
   
   #include <iostream>
   using namespace std;
   int main()
   {
    int i,j,k,row,column;
    cout<<"enter the number of columns:";
    cin>>column;
    cout<<"enter the number of rows:";
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            if(i==1 || i==row || j==1 || j==column)
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