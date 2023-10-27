#include <iostream>
using namespace std;

void fun(int n)
{

  if (n <= 1)
    return;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "Hello" << endl;
      break;
    }
  }

  return;
}

void fun2(int n)
{
  int count = 0;

  for (int i = n / 2; i <= n; i++)
  {
    for (int j = 1; j + n / 2 <= n; j++)
    {
      for (int k = 1; k <= n; k = k * 2)
      {
        count++;
      }
    }
  }
  cout << count << endl;
}
int main()
{

  int n;
  cin >> n;

  // fun(n) --> Time complexity ?
  // fun2(n) --> Time complexity ?
  return 0;
}