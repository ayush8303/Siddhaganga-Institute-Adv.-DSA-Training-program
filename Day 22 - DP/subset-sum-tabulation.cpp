#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int arr[N];

int main()
{
  int sum, n;
  cin >> n >> sum;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  // memo.resize(n, vector<int>(sum + 1, -1));
  // cout << subsetSumRepeating(n - 1, sum) << endl;

  bool dp[n + 1][sum + 1];
  dp[0][0] = true;
  for (int j = 1; j <= sum; j++)
  {
    dp[0][j] = false;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      // exclude
      dp[i][j] = dp[i - 1][j];

      // include
      if (j - arr[i] >= 0)
      {
        dp[i][j] |= dp[i - 1][j - arr[i]];
      }
    }
  }
  cout << dp[n][sum] << endl;

  return 0;
}