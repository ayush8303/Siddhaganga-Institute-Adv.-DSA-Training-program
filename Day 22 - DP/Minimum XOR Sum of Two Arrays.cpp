class Solution
{
public:
  int dp[14][(1 << 14)];
  int recur(int i, int mask, vector<int> &nums1, vector<int> &nums2)
  {
    // base case
    if (i == nums1.size())
    {
      return 0;
    }
    if (dp[i][mask] != -1)
    {
      return dp[i][mask];
    }
    int ans = INT_MAX;
    for (int j = 0; j < nums2.size(); j++)
    {
      if ((mask & (1 << j)) == 0)
      {
        ans = min(ans, (nums1[i] ^ nums2[j]) + recur(i + 1, mask ^ (1 << j), nums1, nums2));
      }
    }
    dp[i][mask] = ans;
    return ans;
  }
  int minimumXORSum(vector<int> &nums1, vector<int> &nums2)
  {
    memset(dp, -1, sizeof(dp));
    return recur(0, 0, nums1, nums2);
  }
};
