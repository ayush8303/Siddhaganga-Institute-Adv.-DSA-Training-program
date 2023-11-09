#include <bits/stdc++.h>
using namespace std;

// DSU data structure
// path compression + union by rank
class DSU
{
  int *parent;
  int *rank;

public:
  DSU(int n)
  {
    parent = new int[n];
    rank = new int[n];

    // parent -1, rank=1
    for (int i = 0; i < n; i++)
    {
      parent[i] = -1;
      rank[i] = 1;
    }
  }

  // find function
  int find(int x)
  {
    // base case
    if (parent[x] == -1)
      return x;
    return parent[x] = find(parent[x]);
  }

  // Union
  void Union(int x, int y)
  {
    int s1 = find(x);
    int s2 = find(y);
    if (s1 != s2)
    {
      // union by rank
      if (rank[s1] < rank[s2])
      {
        parent[s1] = s2;
        rank[s2] += rank[s1];
      }
      else
      {
        parent[s2] = s1;
        rank[s1] += rank[s2];
      }
    }
  }
};

int main()
{

  return 0;
}
