#include <iostream>
using namespace std;
main()
{
  int n,i,fact=1;
  cout<<"Enter a given number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
      fact=fact*i;
  }
  cout<<fact;
}
