#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
      int a,b,c,avg;
      cin>>a>>b>>c;
      avg=(a+b)/2;
      if(avg>c)
      cout<<"yes\n";
      else
      cout<<"no\n";
}
	return 0;
}
