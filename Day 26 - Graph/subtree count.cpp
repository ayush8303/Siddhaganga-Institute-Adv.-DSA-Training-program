#include <bits/stdc++.h>
using namespace std;

void dfs(int x, int p, vector<int> &subtree, vector<vector<int>> &gr)
{
  subtree[x] = 1;
  for (int &nbr : gr[x])
  {
    if (nbr != p)
    {
      dfs(nbr, x, subtree, gr);
      subtree[x] += subtree[nbr];
    }
  }
}

int main()
{

  int n, m;
  cin >> n >> m;

  vector<vector<int>> gr(n);
  for (int i = 1; i < n; i++)
  {
    int u, v;
    cin >> u >> v;
    u--, v--;
    gr[u].push_back(v);
    gr[v].push_back(u);
  }

  vector<int> subtree(n, 0);
  dfs(0, -1, subtree, gr);
  int q;
  cin >> q;
  while (q--)
  {
    int u;
    cin >> u;
    u--;
    cout << subtree[u] << ' ';
  }

  return 0;
}