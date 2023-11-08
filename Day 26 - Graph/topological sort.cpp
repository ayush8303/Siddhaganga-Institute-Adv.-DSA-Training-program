#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> gr[N];

int main()
{

  int n, m;
  cin >> n >> m;

  vector<int> indegree(n, 0);
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    gr[x].push_back(y);
    indegree[y]++;
  }

  // bfs
  queue<int> q;
  for (int i = 0; i < n; i++)
  {
    if (indegree[i] == 0)
    {
      q.push(i);
    }
  }
  vector<int> toposort;
  // starting popping
  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    toposort.push_back(node);

    // iterate over the nbrs of this node and reduce their indegree[nbr] by 1
    for (int &nbr : gr[node])
    {
      indegree[nbr]--;
      if (indegree[nbr] == 0)
      {
        q.push(nbr);
      }
    }
  }
  for (auto &x : toposort)
    cout << x << ' ';

  return 0;
}