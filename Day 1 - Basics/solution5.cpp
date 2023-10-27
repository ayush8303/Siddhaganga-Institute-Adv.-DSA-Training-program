#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
  char a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int sum = (a - 'a' + 1) + (b - 'a' + 1) + (c - 'a' + 1) + (d - 'a' + 1) + (e - 'a' + 1);
  cout << sum;
  return 0;
}