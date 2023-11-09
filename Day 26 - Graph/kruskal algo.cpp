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

class Graph
{
  vector<vector<int>> edgelist;
  int V;

public:
  Graph(int V)
  {
    this->V = V;
  }
  void addEdges(int x, int y, int w)
  {
    edgelist.push_back({w, x, y});
  }
  int kruskal_mst()
  {
    sort(edgelist.begin(), edgelist.end());

    // intialise DSU
    DSU d(V);

    int ans = 0;
    for (auto edge : edgelist)
    {
      int w = edge[0];
      int x = edge[1];
      int y = edge[2];

      // take this edge in MST if it doesn't form a cycle
      if (d.find(x) != d.find(y))
      {
        ans += w;
        d.Union(x, y);
      }
    }
    return ans;
  }
};

int main()
{
  int n, m;
  cin >> n >> m;

  Graph g(n);
  for (int i = 0; i < m; i++)
  {
    int x, y, w;
    cin >> x >> y >> w;
    x--, y--;
    g.addEdges(x, y, w);
  }
  cout << g.kruskal_mst() << endl;
  return 0;
}