#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int32_t main()
{

  int n, k;
  cin >> n >> k;

  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int dp[k + 1];
  // 0 -> loosing pos
  // 1 -> winning pos
  dp[0] = 0;
  for (int i = 1; i <= k; i++)
  {
    dp[i] = 0;
    for (int j = 0; j < n; j++)
    {
      if (i - a[j] >= 0 and dp[i - a[j]] == 0)
      {
        dp[i] = 1;
        break;
      }
    }
  }
  if (dp[k] == 1)
    cout << "First";
  else
    cout << "Second";

  return 0;
}