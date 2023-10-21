#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{

  int mid = (s + e) / 2;
  int i = s;       // starting index of left half
  int j = mid + 1; // starting index of right half

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
  return;
}

void merge_sort(vector<int> &arr, int s, int e)
{
  // base case
  if (s >= e)
  {
    return;
  }
  int mid = (s + e) / 2;

  // left half [s....mid]
  merge_sort(arr, s, mid);

  // right half [s....mid]
  merge_sort(arr, mid + 1, e);

  // merge
  merge(arr, s, e);
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

  int s = 0, e = n - 1;
  merge_sort(arr, s, e);
  for (int x : arr)
  {
    cout << x << ' ';
  }
  cout << endl;

  return 0;
}
