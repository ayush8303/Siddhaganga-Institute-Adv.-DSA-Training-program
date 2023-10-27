#include <iostream>
using namespace std;

int main()
{

  int n;    // 1 unit of time
  cin >> n; // 1 unit of time

  int x = 2; // 1 unit of time
  x = x + 1; // 1 unit of time

  for (int i = 1; i <= n; i++)
  {
    // statement    // n unit of time
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      // statement   // n^2 unit of time
    }
  }

  return 0;
}