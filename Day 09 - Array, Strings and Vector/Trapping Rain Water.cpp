#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  int trap(vector<int> &height)
  {
    int n = height.size();

    int suff_max[n];
    int pref_max[n];

    pref_max[0] = height[0];
    for (int i = 1; i < n; i++)
    {
      pref_max[i] = max(pref_max[i - 1], height[i]);
    }

    suff_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
      suff_max[i] = max(suff_max[i + 1], height[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      int L = pref_max[i], R = suff_max[i];
      ans += (min(L, R) - height[i]);
    }
    return ans;
    // TC - O(n)
    // ASC - O(n) + O(n) = O(2n) = O(n)
  }
};

int main()
{
}