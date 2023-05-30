#include <iostream>
using namespace std;
int main()
{
  int i,j;
  for(i=1; i<=5; i++)
    {
        for(j=1; j<=i+4; j++)
        {
          if(i==j || j>=i)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
}
