#include <iostream>
using namespace std;
int main()
{
  int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
          if(i==j || i+j==6|| i==1||j==1|| i==5||j==5){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        cout<<endl;
    }
}
