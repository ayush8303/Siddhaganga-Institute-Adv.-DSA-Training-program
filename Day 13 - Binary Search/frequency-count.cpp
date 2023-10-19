#include <bits/stdc++.h>
using namespace std;
#define int long long int

int lower_bound(vector<int> &arr, int k)
{
  int n = arr.size();
  int low = 0, high = n - 1;
  int ans = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] >= k)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return ans;
}

int upper_bound(vector<int> &arr, int k)
{
  int n = arr.size();
  int low = 0, high = n - 1;
  int ans = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] > k)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return ans;
}

int32_t main()
{

  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int freq = upper_bound(arr, k) - lower_bound(arr, k);
  // int freq = upper_bound(arr.begin(), arr.end(), k) - lower_bound(arr.begin(), arr.end(), k);
  cout << freq << endl;

  return 0;
}
