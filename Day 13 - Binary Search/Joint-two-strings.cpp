#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void solve()
{
  int n;
  cin >> n;
  string t;
  cin >> t;
  vector<int> left(n), right(n);
  for (int cnt = 0; cnt < n; cnt++)
  {
    string s;
    cin >> s;
    int i = s.length() - 1, j = t.length() - 1;
    while (i >= 0 and j >= 0)
    {
      if (s[i] == t[j])
        j--;
      i--;
    }
    right[cnt] = j + 1;

    i = 0, j = 0;
    while (i < s.length() and j < t.length())
    {
      if (s[i] == t[j])
        j++;
      i++;
    }
    left[cnt] = j - 1;
  }
  vector<int> sortedRight = right;
  sort(sortedRight.begin(), sortedRight.end());
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int id = (upper_bound(sortedRight.begin(), sortedRight.end(), left[i] + 1) - sortedRight.begin());
    ans += id;
  }
  cout << ans << endl;
}

int32_t main()
{
  solve();

  return 0;
}
