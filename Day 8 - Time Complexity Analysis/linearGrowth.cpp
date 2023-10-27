#include <iostream>
using namespace std;

int main()
{

  int n;    // 1 unit of time
  cin >> n; // 1 unit of time

  int sum = 0; // 1 unit of time
  for (int i = 1; i <= n; i++)
  {
    sum += i; // n unit of time
  }
  cout << sum << endl; // 1 unit of time

  // f(n) = 4 + n
  // f(n) = O(n)  -> order of growth of f(n) is linear (n)

  return 0;
}