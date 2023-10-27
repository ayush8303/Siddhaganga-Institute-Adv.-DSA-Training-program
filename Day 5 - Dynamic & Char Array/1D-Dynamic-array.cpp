#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

int main()
{
  int n;
  cin >> n;

  // Dynamic Array
  int *arr = new int[n];
  cout << arr << endl;
  for (int i = 0; i < n; i++)
  {
    arr[i] = i;
    cout << arr[i] << ' ';
  }
  cout << endl;
  delete[] arr;
  cout << arr << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << endl;

  return 0;
}
