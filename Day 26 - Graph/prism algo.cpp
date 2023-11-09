#include <bits/stdc++.h>
using namespace std;

class Graph
{
  // adjacency list
  vector<pair<int, int>> *l;
  int V; // no. of vertices

public:
  Graph(int n)
  {
    V = n;
    l = new vector<pair<int, int>>[n];
  }
  void addEdge(int x, int y, int w)
  {
    l[x].push_back({y, w});
    l[y].push_back({x, w});
  }

  int prims_mst()
  {
    // intialize a min heap
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
    // another array that denotes whether a node has been included in MST or NOT
    bool *vis = new bool[V]{0};
    int ans = 0;

    // begin
    Q.push({0, 0}); // weight,node
    while (!Q.empty())
    {
      // pick out the edge with min weight
      pair<int, int> best = Q.top();
      Q.pop();

      int to = best.second;
      int weight = best.first;

      if (vis[to] == 1)
      {
        // discard the edge and continue
        continue;
      }

      // otherwise take the current edge
      ans += weight;
      vis[to] = 1;

      // add new edges in the queue
      for (pair<int, int> x : l[to])
      {
        if (vis[x.first] == 0)
        {
          Q.push({x.second, x.first});
        }
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
    g.addEdge(x, y, w);
  }
  cout << g.prims_mst() << endl;

  return 0;
}
