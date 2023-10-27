#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> singleNumber(vector<int> &nums)
  {
    int cumulative_xor = 0;
    for (int x : nums)
    {
      cumulative_xor ^= x;
    }

    int pos = 0; // p
    int temp = cumulative_xor;
    while ((temp & 1) == 0)
    {
      temp >>= 1;
      pos++;
    }

    // filter out the numbers from the nums[] which have bit set at position 'pos'
    int varA = 0;
    int varB = 0;
    int mask = (1 << pos);
    for (int x : nums)
    {
      if ((x & mask) > 0)
      {
        varA ^= x;
      }
      else
      {
        varB ^= x;
      }
    }
    return {varA, varB};
  }
};

int main()
{

  return 0;
}