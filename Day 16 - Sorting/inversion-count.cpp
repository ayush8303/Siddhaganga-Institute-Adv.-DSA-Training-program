#include <bits/stdc++.h>
using namespace std;
#define int long long int

int merge(vector<int> &arr, int s, int e)
{

  int mid = (s + e) / 2;
  int i = s;       // starting index of left half
  int j = mid + 1; // starting index of right half

  int cnt = 0; // cross inversions
  vector<int> temp;
  while (i <= mid && j <= e)
  {
    if (arr[i] <= arr[j])
    {
      temp.push_back(arr[i]);
      i++;
    }
    else
    {
      cnt += (mid - i + 1);
      temp.push_back(arr[j]);
      j++;
    }
  }
  // copy rem elements from left half
  while (i <= mid)
  {
    temp.push_back(arr[i]);
    i++;
  }

  // copy rem elements from right half
  while (j <= e)
  {
    temp.push_back(arr[j]);
    j++;
  }

  int k = 0; // index in temp vector
  for (int i = s; i <= e; i++)
  {
    arr[i] = temp[k];
    k++;
  }
  return cnt;
}

int merge_sort(vector<int> &arr, int s, int e)
{
  // base case
  if (s >= e)
  {
    return 0;
  }
  int mid = (s + e) / 2;

  // left half [s....mid]
  int c1 = merge_sort(arr, s, mid);

  // right half [s....mid]
  int c2 = merge_sort(arr, mid + 1, e);

  // merge
  int CI = merge(arr, s, e);

  return c1 + c2 + CI;
}

int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int s = 0, e = n - 1;
    int cnt = merge_sort(arr, s, e);

    cout << cnt << endl;
  }
  return 0;
}