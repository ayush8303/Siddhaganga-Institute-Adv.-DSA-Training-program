#include <iostream>
using namespace std;
#define endl '\n'


int main()
{
  int arr[5] = {1, 2, 3, 4, 5}; // read only pointer

  for (int i = 0; i < 5; i++) {
    cout << *(arr + i) << ' ';
  }


  int *ptr = arr; // inc, dec allowed
  cout << "address of array " << arr << endl;
  cout << "address of pointer variable " << ptr << endl;
  for (int i = 1; i<= 5; i++) {
    cout << (*ptr) << ' ';
    ptr++;
  }

  return 0;
}