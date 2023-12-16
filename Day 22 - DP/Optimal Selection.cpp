#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int inf = 1e8;

int32_t main()
{
  int k, n;
  cin >> k >> n;

  int price[k][n];
  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> price[i][j];
    }
  }
  vector<vector<int>> dp(1 << k, vector<int>(n, inf));

  dp[0][0] = 0;

  for (int i = 0; i < k; i++)
  {
    // cost of purchasing ith product on day 0
    dp[1 << i][0] = price[i][0];
  }

  for (int mask = 0; mask < (1 << k); mask++)
  {
    for (int d = 1; d < n; d++)
    {
      // don't buy on day d
      dp[mask][d] = dp[mask][d - 1];
      for (int x = 0; x < k; x++)
      {
        if ((mask >> x) & 1)
        {
          // unset the xth bit of mask
          int new_mask = mask ^ (1 << x);
          dp[mask][d] = min(dp[mask][d], dp[new_mask][d - 1] + price[x][d]);
        }
      }
    }
  }

  int minCost = dp[(1 << k) - 1][n - 1];
  cout << minCost << endl;

  return 0;
}