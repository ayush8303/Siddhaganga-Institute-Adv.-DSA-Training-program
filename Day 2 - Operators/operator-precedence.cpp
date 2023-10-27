#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
  cout << "Operator precedence" << endl;
  int a = 10, b = 20, c = 30;
  int res = a * b + c;
  cout << res << endl;
  int x = 10, y = 20;
  cout << (y * x / 5) << endl; // 200/5=40
  cout << (y / x * 5) << endl; // 2*5=10

  return 0;
}
