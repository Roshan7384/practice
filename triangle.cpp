#include <iostream>
using namespace std;
int main()
{
  int i,j;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=5; j++)
        {
          if(i==3&&j<=5 || i+j==4 || i*j==8 || i*j==6 )
            cout<<"*";
           else
        cout<<" ";
        }
        cout<<endl;
    }
}
