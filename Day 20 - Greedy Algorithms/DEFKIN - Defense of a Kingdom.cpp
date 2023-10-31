#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  { // t=3   3 -> 2 -> 1 -> 0

    int h, w, n;
    cin >> w >> h >> n;
    int x[n + 2];
    int y[n + 2];
    x[0] = 0;
    x[n + 1] = w + 1;
    y[0] = 0;
    y[n + 1] = h + 1;
    for (int i = 1; i <= n; i++)
    {
      cin >> x[i] >> y[i];
    }
    sort(x, x + n + 2);
    sort(y, y + n + 2);
    int maxX = 0;
    int maxY = 0;
    for (int i = 1; i <= (n + 1); i++)
    {
      int no_of_cells_in_x = x[i] - x[i - 1] - 1;
      int no_of_cells_in_y = y[i] - y[i - 1] - 1;
      maxX = max(maxX, no_of_cells_in_x);
      maxY = max(maxY, no_of_cells_in_y);
    }
    cout << maxX * maxY << endl;
  }
  return 0;
}
