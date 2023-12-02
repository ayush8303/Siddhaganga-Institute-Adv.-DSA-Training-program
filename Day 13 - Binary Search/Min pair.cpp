#include <bits/stdc++.h>
using namespace std;

int min_pair(vector<int> &arr1, vector<int> &arr2)
{

  // sort one array
  sort(arr2.begin(), arr2.end());

  int ans = INT_MAX; // min abs diff

  // iterate over 1 array and look for closest elements in the second array
  for (int &x : arr1)
  {
    auto lb = lower_bound(arr2.begin(), arr2.end(), x);
    int id1 = (lb - arr2.begin());
    int id2 = id1 - 1;
    if (id1 < arr2.size())
    {
      ans = min(ans, abs(x - arr2[id1]));
    }
    if (id2 >= 0 && id2 < arr2.size())
    {
      ans = min(ans, abs(x - arr2[id2]));
    }
  }
  return ans;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> arr1, arr2;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    arr1.push_back(x);
  }

  for (int i = 1; i <= m; i++)
  {
    int x;
    cin >> x;
    arr2.push_back(x);
  }
  cout << min_pair(arr1, arr2) << endl;
  // TC -  O(mlogm + nlogm)
  return 0;
}