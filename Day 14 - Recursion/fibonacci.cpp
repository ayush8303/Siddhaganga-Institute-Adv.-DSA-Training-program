#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
int fib(int n)
{
  // cnt++;
  if (n <= 1)
  {
    return n;
  }

  int f1 = fib(n - 1);
  int f2 = fib(n - 2);
  return f1 + f2;
}

int main()
{
  int n;
  cin >> n;
  cout << fib(n) << endl;
  // cout << cnt << endl;
  return 0;
}
