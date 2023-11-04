#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
int dp[N][3];

int main()
{

  int n;
  cin >> n;
  int arr[n][3];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }

  dp[0][0] = arr[0][0];
  dp[0][1] = arr[0][1];
  dp[0][2] = arr[0][2];

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int jj = 0; jj < 3; jj++)
      {
        if (j != jj)
        {
          dp[i][j] = max(dp[i][j], dp[i - 1][jj] + arr[i][j]);
        }
      }
    }
  }
  cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});

  return 0;
}