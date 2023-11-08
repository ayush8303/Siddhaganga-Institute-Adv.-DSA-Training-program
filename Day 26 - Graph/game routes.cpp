#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e9 + 7;

int32_t main()
{

  int n, m;
  cin >> n >> m;

  vector<vector<int>> gr(n + 1);
  vector<int> indegree(n + 1);
  for (int i = 1; i <= m; i++)
  {
    int x, y;
    cin >> x >> y;
    gr[x].push_back(y);
    indegree[y]++;
  }

  queue<int> q;
  for (int i = 1; i <= n; i++)
  {
    if (indegree[i] == 0)
    {
      q.push(i);
    }
  }
  vector<int> topo;
  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    topo.push_back(node);
    for (int &nbr : gr[node])
    {
      indegree[nbr]--;
      if (indegree[nbr] == 0)
      {
        q.push(nbr);
      }
    }
  }
  vector<int> dp(n + 1, 0);
  dp[1] = 1;
  for (int &node : topo)
  {
    for (int &nbr : gr[node])
    {
      dp[nbr] = (dp[nbr] + dp[node]) % mod;
    }
  }
  cout << dp[n];
  return 0;
}