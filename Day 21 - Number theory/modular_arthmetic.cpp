#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int addm(int x, int y)
{
  return ((x % mod) + (y % mod)) % mod;
}
int subm(int x, int y)
{
  return ((x % mod) - (y % mod) + mod) % mod;
}

int mulm(long long x, long long y)
{
  return ((x % mod) * (y % mod)) % mod;
}

int power(int x, int n)
{
  int res = 1;
  while (n > 0)
  {
    int last_bit = (n & 1);
    if (last_bit)
      res = mulm(res, x);
    // n=n>>1;
    n >>= 1;
    x = mulm(x, x);
  }
  return res;
}

int inv(int x)
{
  return power(x, mod - 2);
}

int divm(int x, int y)
{ // x/y
  return mulm(x, inv(y));
}

int main()
{
  int x, y;
  cin >> x >> y;
  // cout << addm(x, y);
  // cout<<subm(x,y);
  // cout << mulm(x, y);
  cout << divm(x, y);
  return 0;
}
