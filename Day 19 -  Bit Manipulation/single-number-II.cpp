#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void update(vector<int> &sumArr, int x)
  {

    for (int i = 0; i < 32; i++)
    {

      // int ith_bit = x & (1 << i);
      int ith_bit = (x >> i) & 1;
      if (ith_bit > 0)
      {
        sumArr[i]++;
      }
    }
  }
  int singleNumber(vector<int> &nums)
  {
    vector<int> sumArr(32, 0);

    for (int x : nums)
    {
      update(sumArr, x);
    }

    for (int i = 0; i < 32; i++)
    {
      sumArr[i] %= 3;
    }

    int ans = 0;

    for (int i = 0; i < 32; i++)
    {
      if (sumArr[i] > 0)
      {
        ans += (1 << i);
      }
    }
    return ans;
  }
};

int main()
{

  return 0;
}