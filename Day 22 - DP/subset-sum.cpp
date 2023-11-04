#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int arr[N];

int n;
vector<vector<int>> memo;

// whether sum is possible from subset of arr[......index]
int subsetSum(int index, int sum)
{

  // no elements left for sum
  if (index == -1)
  {
    // if(sum==0) return 1;
    // else return 0;
    return (sum == 0);
  }

  if (memo[index][sum] != -1)
    return memo[index][sum];

  bool ans = 0;
  // include arr[index] in sum
  if (sum >= arr[index])
  {
    ans |= subsetSum(index - 1, sum - arr[index]);
  }

  // exclude arr[index]
  ans |= subsetSum(index - 1, sum);
  memo[index][sum] = ans;
  return ans;
}

int main()
{
  int sum;
  cin >> n >> sum;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  memo.resize(n, vector<int>(sum + 1, -1));
  cout << subsetSum(n - 1, sum);

  return 0;
}