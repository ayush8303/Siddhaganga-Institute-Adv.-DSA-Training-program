#include <iostream>
using namespace std;
#define endl '\n'


void printArr(int n, int *arr) { // arr[] ==  *arr

  // sizeof(pointer variable ) 8 byte -> 8/4 = 2
  int sz = sizeof(arr) ;
  cout << "Inside function " << sz << endl;
  for (int i = 0; i < n; i++) cout << arr[i] << ' ';
  return ;
}


int main()
{
  int arr[5] = {1, 2, 3, 4, 5}; // read only pointer

  int sz = sizeof(arr) / sizeof(int); // 5*4=20 -> 20/4 = 5
  cout << "inside main " << sz << endl;

  printArr(5, arr);

  return 0;
}