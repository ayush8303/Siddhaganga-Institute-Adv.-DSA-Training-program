#include <bits/stdc++.h>
using namespace std;

bool bipartiteBFS(int source, vector<int> adj[], int color[])
{

  queue<int> q;
  color[source] = 0;
  q.push(source);

  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    // cout << node << "--> ";
    for (int nbr : adj[node])
    {
      // cout << nbr << ' ';
      if (color[nbr] == -1)
      {
        color[nbr] = color[node] ^ 1;
        q.push(nbr);
        // 1^1 = 0
        // 0^1 = 1
      }
      else if (color[nbr] == color[node])
      {
        return false;
      }
    }
    // cout << endl;
  }
  return true;
}

bool bipartiteDFS(int node, vector<int> adj[], int color[])
{

  if (color[node] == -1)
  {
    color[node] = 1;
  }
  for (int nbr : adj[node])
  {
    if (color[nbr] == -1)
    {
      color[nbr] = color[node] ^ 1;
      if (bipartiteDFS(nbr, adj, color) == false)
      {
        return false;
      }
    }
    else if (color[nbr] == color[node])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> gr[n + 1];
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    gr[x].push_back(y);
    gr[y].push_back(x);
  }

  int color[n + 1];
  memset(color, -1, sizeof(color));

  bool isBipartite = true;
  // multiple components
  for (int i = 1; i <= n; i++)
  {
    if (color[i] == -1)
    {
      if (bipartiteDFS(i, gr, color) == false)
      {
        isBipartite = false;
        break;
      }
    }
  }
  if (isBipartite)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}