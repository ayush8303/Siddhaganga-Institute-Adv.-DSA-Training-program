
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  int cost[3][n];
  for (int j = 0; j < n; j++)
  {
    cin >> cost[0][j];
  }
  for (int j = 0; j < n; j++)
  {
    cin >> cost[1][j];
  }
  for (int j = 0; j < n; j++)
  {
    cin >> cost[2][j];
  }

  int dp[3][n];
  dp[0][0] = cost[0][0];
  dp[1][0] = cost[1][0];
  dp[2][0] = cost[2][0];

  for (int j = 1; j < n; j++)
  {
    for (int i = 0; i < 3; i++)
    {
      dp[i][j] = INT_MAX;
      for (int ii = 0; ii < 3; ii++)
      {
        if (i != ii)
        {
          dp[i][j] = min(dp[ii][j - 1] + cost[i][j], dp[i][j]);
        }
      }
      // cout << dp[i][j] << ' ';
    }
  }
  cout << min({dp[0][n - 1], dp[1][n - 1], dp[2][n - 1]});

  return 0;
}