#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> ind;

bool cmp(int x, int y)
{
  return ind[x] < ind[y];
}

vector<int> bfs(int n)
{
  vector<int> ordering; // bfs traversal
  vector<int> visited(n + 1);
  queue<int> q;
  q.push(1);
  visited[1] = 1;
  while (!q.empty())
  {
    int u = q.front();
    ordering.push_back(u);
    q.pop();
    for (int &nbr : adj[u])
    {
      if (visited[nbr] == 0)
      {
        visited[nbr] = 1;
        q.push(nbr);
      }
    }
  };
  return ordering;
}

int main()
{
  int n;
  cin >> n;

  adj.resize(n + 1);
  ind.resize(n + 1);
  for (int i = 1; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> ind(n + 1);
  for (int i = 0; i < n; i++)
  {
    ind[a[i]] = i;
  }
  for (int i = 1; i <= n; i++)
  {
    sort(adj[i].begin(), adj[i].end(), cmp);
  }
  if (bfs(n) == a)
    cout << "Yes";
  else
    cout << "No";

  return 0;
}