#include <bits/stdc++.h>
using namespace std;

#define N 1000000 + 1

void prime_sieve(vector<int> &sieve)
{

  // mark 1 and 0 as non-prime
  sieve[0] = sieve[1] = 0;
  ;

  for (long long p = 2; p < N; p++)
  {
    if (sieve[p] == 1)
    {
      for (long long j = p * p; j < N; j += p)
      {
        // marking j as non-prime
        sieve[j] = 0;
      }
    }
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> sieve(N, 1);
  prime_sieve(sieve);
  int cnt = 0;
  for (int i = 0; i <= n; i++)
  {
    if (sieve[i] == 1)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
