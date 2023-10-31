#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int // arr[i] < (2^64)

int32_t main()
{
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  if (n >= 130)
  {
    cout << "Yes" << endl;
  }
  else
  {
    map<int, int> mp;
    for (int x : arr)
    {
      mp[x]++;
    }

    bool exist = 0;
    for (int i = 0; i < n - 3; i++)
    { // a
      int a = arr[i];
      mp[a]--;
      for (int j = i + 1; j < n - 2; j++)
      { // b
        int b = arr[j];
        mp[b]--;
        for (int k = j + 1; k < n - 1; k++)
        { // c
          int c = arr[k];
          mp[c]--;
          int d = a ^ b ^ c;
          if (mp[d] > 0)
          {
            exist = 1;
            break;
          }
          mp[c]++;
        }
        mp[b]++;
      }
      mp[a]++;
    }
    if (exist == 1)
      cout << "Yes";
    else
      cout << "No";
  }
  return 0;
}