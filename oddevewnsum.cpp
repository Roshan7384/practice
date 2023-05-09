#include <iostream>
using namespace std;
int main()
{
    int i,sumeven=0,sumodd=0,n;
    cout<<"enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+i;
        }
        
    }
    cout<<sumeven<<endl;
    for(i=1;i<=n;i++)
    {
        if(n%i!=0)
        {
            sumodd=sumodd+i;
        }
    }
    cout<<sumodd;
}
