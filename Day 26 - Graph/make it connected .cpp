#include <bits/stdc++.h>
using namespace std;
#define int long long int

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

int32_t main()
{
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  vector<vector<int>> special(m);
  for (int i = 0; i < m; i++)
  {
    int x, y, w;
    cin >> x >> y >> w;
    x--, y--;
    special[i] = {x, y, w};
  }

  vector<array<int, 3>> edgeList;
  int minValueIndex = 0;
  int minValue = 1e15;
  for (int i = 0; i < n; i++)
  {
    if (a[i] < minValue)
    {
      minValue = a[i];
      minValueIndex = i;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (minValueIndex != i)
    {
      edgeList.push_back({a[i] + a[minValueIndex], i, minValueIndex});
    }
  }
  for (int i = 0; i < m; i++)
  {
    edgeList.push_back({special[i][2], special[i][0], special[i][1]});
  }

  // kruskal algo
  sort(edgeList.begin(), edgeList.end());
  DSU d(n);
  int ans = 0;
  for (auto edge : edgeList)
  {
    int w = edge[0];
    int x = edge[1];
    int y = edge[2];

    if (d.find(x) != d.find(y))
    {
      d.Union(x, y);
      ans += w;
    }
  }
  cout << ans << endl;

  return 0;
}