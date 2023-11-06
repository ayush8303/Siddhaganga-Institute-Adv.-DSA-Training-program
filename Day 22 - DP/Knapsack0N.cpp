#include <bits/stdc++.h>
using namespace std;

const int N = 2001;
int S[N], V[N];
int memo[N][N];

int knapsack(int index, int size)
{
  if (index == 0)
  {
    return 0;
  }

  int &ans = memo[index][size];
  if (ans != -1)
    return ans;
  ans = 0;
  // include
  if (S[index] <= size)
  {
    ans = V[index] + knapsack(index, size - S[index]);
  }
  // exclude
  ans = max(ans, knapsack(index - 1, size));
  return ans;
}

int main()
{
  int n, size;
  cin >> size >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> S[i] >> V[i];
  }
  memset(memo, -1, sizeof(memo));
  cout << knapsack(n, size);

  return 0;
}
