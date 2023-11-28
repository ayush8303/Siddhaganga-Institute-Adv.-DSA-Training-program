#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  long maximumSumSubarray(int K, vector<int> &Arr, int N)
  {

    long ans = 0;
    // first window
    long cur = 0;
    for (int i = 0; i < K; i++)
    {
      cur += Arr[i];
    }
    ans = cur;
    for (int i = K; i < N; i++)
    {
      cur += Arr[i];
      cur -= Arr[i - K];
      ans = max(ans, cur);
    }
    // TC - O(n)
    // ASC - O(1)
    return ans;
  }
};

int main()
{
}