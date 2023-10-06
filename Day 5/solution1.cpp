#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

int main()
{
  char ch = cin.get();
  int x = 0, y = 0;
  while (ch != '\n')
  {
    // Decide an action based upon every letter that we read
    switch (ch)
    {
    case 'N':
      y++;
      break;
    case 'S':
      y--;
      break;
    case 'E':
      x++;
      break;
    case 'W':
      x--;
      break;
    }
    ch = cin.get();
  }
  if (x != 0)
  {
    if (x < 0)
    { // move in W dir
      x = x * (-1);
      for (int cnt = 1; cnt <= x; cnt++)
        cout << 'W';
    }
    else
    {
      for (int cnt = 1; cnt <= x; cnt++)
        cout << 'E';
    }
  }
  if (y != 0)
  {
    if (y < 0)
    { // move in S dir
      y = y * (-1);
      for (int cnt = 1; cnt <= y; cnt++)
        cout << 'S';
    }
    else
    {
      for (int cnt = 1; cnt <= y; cnt++)
        cout << 'N';
    }
  }

  return 0;
}
