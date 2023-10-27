#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
  cout << "Short-Circuting in Logical Operators" << endl;
  int x = 5;
  bool res = (x > 10 && (x++));
  cout << "res " << res << endl;
  cout << "x " << x << endl;

  x = 6;
  res = (x < 0 || (++x)); // false || 7(true) = true
  cout << "res " << res << endl;
  cout << "x " << x << endl;
  return 0;
}