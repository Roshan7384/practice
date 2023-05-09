#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,sum=0,per;
    cout<<"enter marks for 5 subject"<<endl;
    cin>>a>>b>>c>>d>>e;
    sum=a+b+c+d+e;
    per=sum/5;
    if(per>90)
    cout<<"A";
    else if(per>80 && per<=90)
    cout<<"B";
    else if(per>=60 && per<=80)
    cout<<"C";
    else
    cout<<"D";
}
    
