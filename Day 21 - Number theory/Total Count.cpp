#include <bits/stdc++.h>
using namespace std;

int main()
{

  int m;
  cin >> m;
  vector<int> primes = {2, 3, 5};
  int n = primes.size();
  int ans = 0;
  for (int i = 1; i < (1 << n); i++)
  {
    int lcm = 1;
    for (int j = 0; j < n; j++)
    { // indexes
      int bit = i & (1 << j);
      if (bit > 0)
      {
        lcm = lcm * primes[j];
      }
    }
    int cur_contr = m / lcm;
    int no_of_set_bits = __builtin_popcount(i);
    if (no_of_set_bits % 2 == 0)
    {
      ans -= cur_contr;
    }
    else
    {
      ans += cur_contr;
    }
  }
  cout << ans << endl;
  return 0;
}