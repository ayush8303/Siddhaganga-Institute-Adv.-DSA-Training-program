
#include <bits/stdc++.h>
using namespace std;

void clearBits(int &n, int i, int j)
{
  int a = (~0) << (j + 1);
  int b = (1 << i) - 1;

  int mask = a | b;

  n = n & mask;
}

void replaceBits(int &n, int m, int i, int j)
{
  clearBits(n, i, j);

  int mask = (m << i);
  n = n | mask;
}

int main()
{

  int n, m, i, j;
  cin >> n >> m >> i >> j;

  replaceBits(n, m, i, j);
  cout << n << endl;

  return 0;
}
