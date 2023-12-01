#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Function to find maximum of each subarray of size k.
  vector<int> max_of_subarrays(int *arr, int n, int k)
  {
    vector<int> ans;
    deque<int> Q;

    // process only the first k elements
    for (int i = 0; i < k; i++)
    {
      while (!Q.empty() && arr[i] >= arr[Q.back()])
      { // strictly dec. 3 2 1
        Q.pop_back();
      }
      Q.push_back(i);
    }
    ans.push_back(arr[Q.front()]);
    // remaining windows
    for (int i = k; i < n; i++)
    {
      // step 1 - contraction
      while (!Q.empty() && Q.front() <= (i - k))
      {
        Q.pop_front();
      }
      // step 2 - store elements in strictly dec order
      while (!Q.empty() && arr[i] >= arr[Q.back()])
      {
        Q.pop_back();
      }
      Q.push_back(i);

      // step 3 - find ans
      ans.push_back(arr[Q.front()]);
    }
    return ans;
  }
};

int main()
{

  return 0;
}