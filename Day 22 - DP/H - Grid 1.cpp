#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int32_t main()
{

  int n, m;
  cin >> n >> m;

  string grid[n];
  for (int i = 0; i < n; i++)
  {
    cin >> grid[i];
  }

  int dp[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (i == 0 and j == 0)
        dp[i][j] = 1;
      else if (j == 0)
        dp[i][j] = dp[i - 1][j];
      else if (i == 0)
        dp[i][j] = dp[i][j - 1];
      else
      {
        dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
      }
      if (grid[i][j] == '#')
        dp[i][j] = 0;
      dp[i][j] %= mod;
    }
  }
  cout << dp[n - 1][m - 1] << endl;

  return 0;
}