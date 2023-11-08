#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> gr;

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

  for (int i = 0; i < n; i++)
  {
    cout << i << "-> ";
    for (int nbr : gr[i])
      cout << nbr << ' ';
    cout << endl;
  }
  return 0;
}
