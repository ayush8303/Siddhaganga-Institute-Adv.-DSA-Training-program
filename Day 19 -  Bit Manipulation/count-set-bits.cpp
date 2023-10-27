
#include <bits/stdc++.h>
using namespace std;

int cntUsingRightShift(int n)
{
  int cnt = 0;
  while (n > 0)
  {
    int LSB = n & 1;
    if (LSB == 1)
      cnt++;

    n >>= 1;
    // n  = n >> 1
  }
  return cnt;

  // TC - O(logn)
}

int optimised(int n)
{
  int cnt = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    cnt++;
  }
  return cnt;

  // TC - O(no. of set bits)
}
int main()
{

  int n;
  cin >> n;

  // cout << cntUsingRightShift(n) << endl;
  cout << optimised(n) << endl;
  return 0;
}