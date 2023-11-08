#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void dfs(int x, vector<vector<int>> &room, vector<int> &visited)
  {
    visited[x] = 1;
    for (int nbr : room[x])
    {
      if (visited[nbr] == 0)
      {
        dfs(nbr, room, visited);
      }
    }
  }
  bool canVisitAllRooms(vector<vector<int>> &rooms)
  {
    int n = rooms.size();

    vector<int> visited(n);
    dfs(0, rooms, visited);
    for (int i = 0; i < n; i++)
    {
      if (visited[i] == 0)
      {
        return false;
      }
    }
    return true;
  }
};

int main()
{

  return 0;
}