#include <bits/stdc++.h>
using namespace std;

bool isSorted(int i, int n, vector<int> &arr)
{
  // base case
  if (i == n - 1)
  {
    return true;
  }

  // recurrence
  if (arr[i] <= arr[i + 1] && isSorted(i + 1, n, arr))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  if (isSorted(0, n, arr))
  {
    cout << "Array is sorted";
  }
  else
  {
    cout << "Array is not sorted";
  }
  return 0;
}