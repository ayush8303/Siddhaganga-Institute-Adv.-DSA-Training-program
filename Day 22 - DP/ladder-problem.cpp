#include <bits/stdc++.h>
using namespace std;

// recurive approach  --> TC - O(n^k)
int countWays(int n, int k)
{
  if (n == 0)
    return 1;
  if (n < 0)
    return 0;
  int ans = 0;
  for (int jump = 1; jump <= k; jump++)
  {
    ans += countWays(n - jump, k);
  }
  return ans;
}

// Topdown DP  TC - O(n*k)  SC - O(n) + O(n)
int countWaysTD(int n, int k, vector<int> &dp)
{
  if (n == 0)
  {
    return 1;
  }
  if (n < 0)
    return 0;
  if (dp[n] != -1)
  {
    return dp[n];
  }
  int ans = 0;
  for (int jump = 1; jump <= k; jump++)
  {
    ans += countWaysTD(n - jump, k, dp);
  }
  dp[n] = ans;
  return dp[n];
}

// Bottom up dp TC-O(n*k) SC - O(n)
int countWaysBU(int n, int k)
{
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int jump = 1; jump <= k; jump++)
    {
      if (i - jump >= 0)
        dp[i] += dp[i - jump];
    }
  }
  return dp[n];
}

// Tc - O(n)
int countWaysOptimised(int n, int k)
{
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    // dp[i]=2*dp[i-1]-dp[i-(k+1)];
    if ((i - (k + 1)) >= 0)
    {
      dp[i] = 2 * dp[i - 1] - dp[i - (k + 1)];
    }
    else
    {
      dp[i] = 2 * dp[i - 1];
    }
  }
  return dp[n];
}
int main()
{

  int n, k;
  cin >> n >> k;
  cout << countWays(n, k) << endl;
  vector<int> dp(n + 1, -1);
  cout << countWaysTD(n, k, dp) << endl;
  cout << countWaysBU(n, k) << endl;
  cout << countWaysOptimised(n, k) << endl;

  return 0;
}
