#include <iostream>
using namespace std;
#define endl '\n'

/*
print pattern :

n = 4

1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

int main()
{
  int rows, cols;
  cin >> rows >> cols;

  int value = 1;
  for (int i = 1; i <= rows; i++)
  { // current row number

    for (int j = 1; j <= cols; j++)
    { // current col number
      cout << value << ' ';

      value++;
    }

    // cout<<j;
    cout << endl;
  }

  return 0;
}