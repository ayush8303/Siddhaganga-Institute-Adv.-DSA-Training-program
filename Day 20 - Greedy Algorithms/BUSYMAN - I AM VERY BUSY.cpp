#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  { // t=3   3 -> 2 -> 1 -> 0
    int n;
    cin >> n;

    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      arr[i] = {b, a};
    }
    sort(arr, arr + n); // sort in ascending order of first element of pair
    int ans = 1;
    int currentEnd = arr[0].first;
    for (int i = 1; i < n; i++)
    {
      if (currentEnd <= arr[i].second)
      {
        ans++;
        currentEnd = arr[i].first;
      }
    }
    cout << ans << endl;

    // Tc -> O(nlogn)
  }
  return 0;
}
