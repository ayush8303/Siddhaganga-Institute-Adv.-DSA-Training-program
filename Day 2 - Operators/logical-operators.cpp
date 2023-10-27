#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
  cout << "Logical Operators" << endl;
  int x = 10, y = 20;
  cout << "Logical AND " << (x > 0 && x < 100) << endl;
  cout << "Logical OR " << (x > 0 || x > y) << endl;
  cout << "Logical NOT " << (!x) << endl;
  return 0;
}
