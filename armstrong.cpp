#include <iostream>
using namespace std;
int main() 
{
    int i,s=0,n,r;
    for(i=1;i<10000;i++)
    {
        n=i;
        s=0;
        while(n!=0)
          {
            r=n%10;
            n=n/10;
            s=s+(r*r*r);
          }
          if(s==i)
          {
            cout<<i<<endl;
          }
          
     }
    return 0;
}
      
    
