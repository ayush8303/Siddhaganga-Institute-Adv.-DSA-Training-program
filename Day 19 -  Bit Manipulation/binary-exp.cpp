#include <bits/stdc++.h>
using namespace std;

// Tc -> O(logn)
int power(int x, int n)
{
  int ans = 1;
  while (n > 0)
  {
    int last_bit = n & 1;
    if (last_bit > 0)
    {
      ans = ans * x;
    }
    n = n >> 1;
    x = x * x;
  }
  return ans;
}

int main()
{
  int x = 2, n = 10;
  cout << power(x, n);
  return 0;
}