#include <iostream>
using namespace std;

int main() {
  int arr[] = {2, 4, 6, 8};
  int size = 4;
  int sum = 0;
  for(int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
 cout << "The sum of the elements in the array: " << sum;
}
