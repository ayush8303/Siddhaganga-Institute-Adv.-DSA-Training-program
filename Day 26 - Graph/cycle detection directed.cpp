#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

vector<int> gr[N];

bool dfs(int node, vector<bool> &visited, vector<bool> &stack)
{

  // arrive at node
  visited[node] = 1;
  stack[node] = 1;

  // do some work at node, return true if backedges is found here
  for (int &nbr : gr[node])
  {
    if (stack[nbr] == true)
    {
      return true;
    }
    else if (visited[nbr] == false)
    {
      bool nbrFoundCycle = dfs(nbr, visited, stack);
      if (nbrFoundCycle)
      {
        return true;
      }
    }
  }

  // going back
  stack[node] = false;
  return false;
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
    // gr[y].push_back(x);
  }

  vector<bool> visited(n + 1);
  vector<bool> stack(n + 1);

  bool cycle = false;
  for (int i = 1; i <= n; i++)
  {
    if (visited[i] == 0)
    {
      if (dfs(i, visited, stack))
      {
        cycle = true;
        break;
      }
    }
  }
  if (cycle == true)
    cout << "Cycle found";
  else
    cout << "No cycle";

  return 0;
}