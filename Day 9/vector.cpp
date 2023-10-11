#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

  vector<int> arr;
  cout << arr.capacity() << endl;
  arr.push_back(1);
  cout << arr.capacity() << endl;
  arr.push_back(2);
  cout << arr.capacity() << endl;
  arr.push_back(3);
  cout << arr.capacity() << endl;

  // for (int i = 0; i < 5; i++) {
  //   cout << arr[i] << ' ';
  // }
  cout << endl;
  // cout << arr.capacity() << endl;
  // arr.push_back(2);  // O(n)
  // cout << arr.capacity() << endl;
  // arr.push_back(2);   // O(1)
  // arr.push_back(2);   // O(1)
  // arr.push_back(2);   // O(1)
  // arr.push_back(2);   // O(1)
  // arr.push_back(3);   // O(n)
  // sort(arr.begin(), arr.end()); // O(nlogn)
  // // cout << arr.capacity() << endl;

  // for (int x : arr) {
  //   cout << x << ' ';
  // }
  // cout << endl;

  return 0;
}
