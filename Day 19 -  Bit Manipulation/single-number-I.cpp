#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int cumulative_xor = 0;
    for (int x : nums)
    {
      cumulative_xor ^= x;
    }
    return cumulative_xor;
  }
};

int main()
{

  return 0;
}