#include <bits/stdc++.h>
using namespace std;

int parition(vector<int> &arr, int s, int e)
{
  int pivot = arr[e];
  int i = s - 1;

  for (int j = s; j < e; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[e]);
  return i + 1;
}

int quick_sort(vector<int> &arr, int s, int e, int k)
{
  // base case
  // if (s >= e) {
  //   return -1;
  // }

  // rec case
  int mid = parition(arr, s, e);
  if (mid == k)
  {
    return arr[mid];
  }
  else if (mid < k)
  {
    return quick_sort(arr, mid + 1, e, k);
  }
  else
  {
    return quick_sort(arr, s, mid - 1, k);
  }
}

int main()
{

  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int s = 0, e = n - 1;
  cout << quick_sort(arr, s, e, k - 1) << endl;

  return 0;
}