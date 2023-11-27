#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    unordered_set<int> st;
    for (int x : nums)
    {
      st.insert(x);
    }
    int ans = 0;
    for (int element : st)
    {
      int parent = element - 1;

      if (st.find(parent) == st.end())
      {
        int next_no = element + 1;
        int cnt = 1;
        while (st.find(next_no) != st.end())
        {
          next_no++;
          cnt++;
        }
        ans = max(ans, cnt);
      }
    }
    return ans;
  }
  // TC  -> O(n)
};

int main()
{
}