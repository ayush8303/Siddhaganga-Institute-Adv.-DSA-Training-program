#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 1e6 + 10;
int n, m;
int trees[N]; // store height of the trees

int isWoodSufficient(int h)
{
  int wood = 0;
  for (int i = 0; i < n; i++)
  {
    if (trees[i] > h)
    {
      wood += (trees[i] - h);
    }
  }
  return wood >= m;
}

int32_t main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> trees[i];
  }
  int low = 0, high = 1e9;
  int ans = 0;
  while (low <= high)
  {
    int mid = (low + high) / 2; // setting blade at height mid
    if (isWoodSufficient(mid))
    {
      ans = mid;
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  cout << ans << endl;
  return 0;
}