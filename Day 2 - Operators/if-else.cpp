#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
  int x = 10, y = 10;

  // IF BLOCK
  if (x < y)
    cout << "X is smaller than Y" << endl; // considered inside if block
  cout << "outside if block" << endl;

  if (x == y)
  {
    cout << "X is equal to Y" << endl;
  }

  // IF ELSE

  if (x > y)
  {
    cout << "X is greater than Y" << endl;
  }
  else
    cout << "X is smaller than or equal to Y" << endl;

  // if - elseif

  int day;
  cin >> day;
  if (day == 1)
  {
    cout << "Sunday" << endl;
  }
  else if (day == 2)
  {
    cout << "Monday" << endl;
  }
  else if (day == 3)
  {
    int a = 10, b = 0;
    int ans = a / b;
    cout << ans << endl;
    cout << "Tuesday" << endl;
  }
  else if (day > 7)
    cout << "Enter Valid Input.";

  // diff btw multiple if block and else if block

  x = 10;
  if (x > 0)
  {
    cout << "X is greater than 0" << endl;
  }
  if (x++)
  {
    cout << "2nd if block" << endl;
  }
  if (++x)
  {
    cout << "3rd if block" << endl;
  }
  cout << x << endl;

  x = 10;
  if (x > 0)
  {
    cout << "X is greater than 0" << endl;
  }
  else if (x++)
  {
    cout << "2nd if block" << endl;
  }
  else if (++x)
  {
    cout << "3rd if block" << endl;
  }
  cout << x << endl;
  return 0;
}