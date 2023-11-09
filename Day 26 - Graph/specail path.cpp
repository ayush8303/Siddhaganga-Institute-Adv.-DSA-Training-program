#include <bits/stdc++.h>
using namespace std;

// DSU data structure
// path compression + union by rank
class DSU
{
  int *parent;
  int *rank;

public:
  DSU(int n)
  {
    parent = new int[n];
    rank = new int[n];

    // parent -1, rank=1
    for (int i = 0; i < n; i++)
    {
      parent[i] = -1;
      rank[i] = 1;
    }
  }

  // find function
  int find(int x)
  {
    // base case
    if (parent[x] == -1)
      return x;
    return parent[x] = find(parent[x]);
  }

  // Union
  void Union(int x, int y)
  {
    int s1 = find(x);
    int s2 = find(y);
    if (s1 != s2)
    {
      // union by rank
      if (rank[s1] < rank[s2])
      {
        parent[s1] = s2;
        rank[s2] += rank[s1];
      }
      else
      {
        parent[s2] = s1;
        rank[s1] += rank[s2];
      }
    }
  }
};

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> edges(m, vector<int>(2));
  for (int i = 0; i < m; i++)
  {
    cin >> edges[i][0] >> edges[i][1];
    edges[i][0]--;
    edges[i][1]--;
  }
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int start, end;
  cin >> start >> end;
  start--, end--;
  int low = 0, high = 1e6 + 10;
  int ans = high;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    DSU d(n);
    for (auto &v : edges)
    {
      int val = abs(a[v[0]] - a[v[1]]);
      if (val <= mid)
      {
        d.Union(v[0], v[1]);
      }
    }
    bool flag = d.find(start) == d.find(end) ? 1 : 0;
    if (flag)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  cout << ans;

  return 0;
}
