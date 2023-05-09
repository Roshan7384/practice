#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,sum;
    float per;
    cout<<"enter marks for 5 subject";
    cin>>a>>b>>c>>d>>e;
    sum=a+b+c+d+e;
    per=(sum/5);
    cout<<sum;
    cout<<per;
    return 0;
}
