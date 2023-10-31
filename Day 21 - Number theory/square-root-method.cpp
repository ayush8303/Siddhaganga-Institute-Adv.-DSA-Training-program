#include <bits/stdc++.h>
using namespace std;

// square root method
bool isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  cout << isPrime(n);

  return 0;
}