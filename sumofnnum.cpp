#include <iostream>
using namespace std;
main()
{
  int n,i,sum=0;
  cout<<"Enter a given number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
      sum=sum+i;
  }
  cout<<sum;
}
