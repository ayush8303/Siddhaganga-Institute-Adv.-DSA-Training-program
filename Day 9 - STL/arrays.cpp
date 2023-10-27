#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printArr1(int n, int *arr1)
{
  for (int i = 0; i < n; i++)
    cout << arr1[i] << ' ';
  cout << endl;
}
void printArr2(array<int, 5> &arr2)
{
  cout << arr2.size() << endl;
  // arr2[0] = 1;
  for (int i = 0; i < 5; i++)
    cout << arr2[i] << ' ';
  cout << endl;
}

int main()
{
  int arr1[5] = {1, 2, 3};

  // arr1 -> 1 2 3 0 0
  // after sorting -> 0 0 1 2 3
  sort(arr1, arr1 + 5);
  array<int, 5> arr2 = {3, 2, 4, 5, 1};

  // 3 2 4 5 1 0 0 0 0 0
  // after sorting - > 0 0 0 0 0 ... 1 2 3 4 5
  // after updation -> 1 0 0 0 0.....1 2 3 4 5

  // for (int i = 0; i < 5; i++) {
  //   cout << arr1[i] << ' ';
  // }
  // cout << endl;
  // for (int i = 0; i < 16; i++) {
  //   cout << arr2[i] << ' ';
  // }
  // printArr1(5, arr1);
  // sort(arr2.begin(),arr2.end());
  // printArr2(arr2);
  // for (int i = 0; i < 5; i++) cout << arr2[i] << ' ';

  for (int &x : arr2)
  {
    x = 1;
    cout << x << ' ';
  }
  cout << endl;
  for (auto x : arr2)
  {
    cout << x << ' ';
  }

  return 0;
}