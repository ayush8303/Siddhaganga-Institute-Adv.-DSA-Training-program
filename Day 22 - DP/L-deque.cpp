#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 3001;
const int inf = 1e18;

int memo[N][N][2], n;
int v[N];
int dp(int i, int j, int turn)
{
  if (i > j)
    return 0;
  int &ans = memo[i][j][turn];
  if (ans != 1e18)
    return ans;
  if (!turn)
    ans = max(v[i] + dp(i + 1, j, 1), v[j] + dp(i, j - 1, 1));
  else
    ans = min(dp(i + 1, j, 0), dp(i, j - 1, 0));
  return ans;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
      memo[i][j][0] = memo[i][j][1] = 1e18;
  }
  cin >> n;
  int s = 0;
  for (int i = 0; i < n; i++)
    cin >> v[i], s += v[i];
  int x = dp(0, n - 1, 0);
  int y = s - x;
  cout << x - y;

  return 0;
}