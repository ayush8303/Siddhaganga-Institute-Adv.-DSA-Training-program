#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int ceilValue = (a + b - 1) / b;
  cout << ceilValue;
  return 0;
}