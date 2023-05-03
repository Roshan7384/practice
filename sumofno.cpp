#include <iostream>
using namespace std;
main()
{
    int n,a,sum=0;
    cout<<"enter a mumber";
    cin>>n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<sum;
}
