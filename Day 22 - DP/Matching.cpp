#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

const int N = 21;

int a[N][N];
int n;
int dp[N][1 << N];

int recur(int m, int mask)
{
  if (m == n)
  {
    return 1;
  }
  int &ans = dp[m][mask];
  if (ans != -1)
  {
    return ans;
  }
  ans = 0;
  for (int x = 0; x < n; x++)
  {
    int set_bit = (mask >> x) & 1;
    int compatible = a[m][x];
    if (set_bit && compatible)
    {
      ans += recur(m + 1, mask ^ (1 << x));
      ans = ans % mod;
    }
  }
  return ans;
}

int32_t main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  memset(dp, -1, sizeof(dp));
  cout << recur(0, (1 << n) - 1);
  return 0;
}