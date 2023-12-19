#include <bits/stdc++.h>
using namespace std;
const int N = 100005;

vector<int> gr[N];
int visited[N];
bool cycle = false;
void dfs(int cur, int par)
{
  // cout<<cur<<endl;
  visited[cur] = 1;
  for (int &nbr : gr[cur])
  {
    if (!visited[nbr])
    {
      dfs(nbr, cur);
    }
    else if (nbr != par)
    {
      // backedge
      cout << cur << " " << nbr << endl;
      cycle = true;
    }
  }
}

int main()
{

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    gr[x].push_back(y);
    gr[y].push_back(x);
  }

  for (int i = 1; i <= n; i++)
  {
    if (visited[i] == 0)
    {
      dfs(i, 0);
    }
  }
  if (cycle)
    cout << "Cycle found." << endl;
  else
    cout << "Graph is forest." << endl;

  return 0;
}
