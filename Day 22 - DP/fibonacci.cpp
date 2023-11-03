#include <bits/stdc++.h>
using namespace std;
const int N = 101;

int fib(int n)
{
  if (n == 0 || n == 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}

int memo[N];
int fibDP(int n)
{
  if (n == 0 || n == 1)
    return n;
  if (memo[n] != -1)
  {
    return memo[n];
  }
  memo[n] = fibDP(n - 1) + fibDP(n - 2);
  return memo[n];
}

int main()
{
  int n;
  cin >> n;
  memset(memo, -1, sizeof(memo));
  // cout<<fib(n);
  cout << fibDP(n);

  return 0;
}