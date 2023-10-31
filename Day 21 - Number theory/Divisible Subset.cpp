#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> cumulative_sum(n);
    cumulative_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
      cumulative_sum[i] = cumulative_sum[i - 1] + a[i];
    }
    vector<int> cumulative_sum_mod(n);
    for (int i = 0; i < n; i++)
    {
      cumulative_sum_mod[i] = cumulative_sum[i] % n;
    }
    int start = 0, end = 0;
    vector<int> indices(n, -1);
    for (int i = 0; i < n; i++)
    {
      int cur_mod = cumulative_sum_mod[i];
      // case 1
      if (cur_mod == 0)
      {
        start = 0;
        end = i;
        break;
      }

      if (indices[cur_mod] != -1)
      {
        start = indices[cur_mod] + 1;
        end = i;
        break;
      }
      indices[cur_mod] = i;
    }
    start++, end++;                    // 1 based indexing
    cout << (end - start + 1) << endl; // size of subset
    for (int i = start; i <= end; i++)
    {
      cout << i << ' ';
    }
    cout << endl;
  }
  return 0;
}