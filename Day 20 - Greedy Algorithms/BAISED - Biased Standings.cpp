#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  { // t=3   3 -> 2 -> 1 -> 0

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      string name;
      int preferred;
      cin >> name >> preferred;
      a[i] = preferred;
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += abs(a[i] - (i + 1));
    }
    cout << sum << endl;
  }
  return 0;
}