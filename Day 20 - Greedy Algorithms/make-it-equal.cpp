#include <bits/stdc++.h>
using namespace std;
#define maxn 200001

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }
  int ans = 0;
  int cnt[maxn] = {0};
  for (int i = 0; i < n; i++)
  {
    cnt[0]++;
    cnt[h[i]]--;
  }
  for (int i = 1; i < maxn; i++)
  {
    cnt[i] += cnt[i - 1];
  }

  long long sum = 0;
  for (int i = maxn - 1; i >= 0; i--)
  {
    if (cnt[i] == n)
    {
      ans += (sum > 0);
      break;
    }
    if (sum + cnt[i] > k)
    {
      ans++;
      sum = cnt[i];
      continue;
    }
    sum += cnt[i];
  }
  cout << ans << endl;
  return 0;
}