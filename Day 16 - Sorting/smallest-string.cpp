#include <bits/stdc++.h>
using namespace std;

bool comparater(string x, string y)
{
  return x + y < y + x;
}
int main()
{

  int n;
  cin >> n;

  string arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n, comparater);
  for (int i = 0; i < n; i++)
    cout << arr[i];
  return 0;
}