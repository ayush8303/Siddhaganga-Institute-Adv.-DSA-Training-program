#include <iostream>
using namespace std;
#define endl '\n'

int main()
{

  // ternary operator
  int x;
  cin >> x;
  x % 2 == 0 ? cout << "Even" : cout << "Odd"; // shorthand for if-else
  return 0;
}