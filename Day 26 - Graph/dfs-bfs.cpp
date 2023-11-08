#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> gr;
// map<int,vector<int>> gr;   if nodes are not in the range [0,n-1]

void dfsHelper(int node, vector<int> &visited)
{
  visited[node] = 1;

  // make a dfs call on all its unvisited neighbours
  for (int nbr : gr[node])
  {
    if (visited[nbr] == 0)
    {
      dfsHelper(nbr, visited);
    }
  }
  cout << node << ' ';
  return;
}

void bfsHelper(int n, int source)
{
  vector<int> visited(n);
  queue<int> q;
  q.push(source);
  visited[source] = 1;
  while (!q.empty())
  {
    int sz = q.size();
    while (sz--)
    { // 3 - 2 - 1
      int node = q.front();
      q.pop();
      cout << node << ' ';
      for (int nbr : gr[node])
      {
        if (visited[nbr] == 0)
        {
          q.push(nbr);
          visited[nbr] = 1;
        }
      }
    }
    cout << endl;
  }
}
int main()
{
  int n, m;
  cin >> n >> m;

  gr.resize(n);
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    gr[x].push_back(y);
    gr[y].push_back(x); // if bi-directional
  }

  // vector<int> vis(n, 0);
  // dfsHelper(1, vis);
  bfsHelper(n, 1);
  return 0;
}