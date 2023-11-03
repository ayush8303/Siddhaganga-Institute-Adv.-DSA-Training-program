#include <bits/stdc++.h>
using namespace std;
#define int long long int

// brute force - TC - O(n)
void factorise(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      int cnt = 0;
      while (n % i == 0)
      {
        n = n / i;
        cnt++;
      }
      cout << i << "^" << cnt << ' ';
    }
  }
}

// - TC - O(n^(1/2))
void Optimised(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      int cnt = 0;
      while (n % i == 0)
      {
        n = n / i;
        cnt++;
      }
      cout << i << "^" << cnt << ' ';
    }
  }
  if (n != 1)
  {
    cout << n << "^" << 1 << ' ';
  }
}

// using prime sieve - TC - O(nloglogn)
void updated_prime_sieve(vector<int> &sieve)
{
  // mark 1 and 0 as non-prime
  sieve[0] = sieve[1] = 0;
  int N = sieve.size();
  for (int p = 2; p < N; p++)
  {
    if (sieve[p] == 1)
    {
      sieve[p] = p;
      for (int j = p * p; j < N; j += p)
      {
        if (sieve[j] == 1)
          sieve[j] = p;
      }
    }
  }
}
void factorise_using_sieve(int n, vector<int> &sieve)
{
  while (n > 1)
  {
    // sieve[n] -> smallest prime divisor of n
    int fact = sieve[n];
    while (n % fact == 0)
    {
      cout << fact << ' ';
      n = n / fact;
    }
  }
}

int32_t main()
{
  int n;
  cin >> n;
  // factorise(n);
  // Optimised(n);
  vector<int> sieve(100, 1);
  updated_prime_sieve(sieve);
  factorise_using_sieve(n, sieve);
  return 0;
}
