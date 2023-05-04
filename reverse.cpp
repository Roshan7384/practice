// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int n ,rev=0,a;
    cout<<"enter a number";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    cout<<rev;
}
