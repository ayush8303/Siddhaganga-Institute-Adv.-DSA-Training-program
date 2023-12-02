#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Function to calculate the span of stockâ€™s price for all n days.
  vector<int> calculateSpan(int price[], int n)
  {
    stack<int> st;
    vector<int> span(n);
    for (int i = 0; i < n; i++)
    {
      int current_price = price[i];

      // step1 -> store indices with strictly order of their values
      while (!st.empty() && price[st.top()] <= current_price)
      {
        st.pop();
      }
      // step2 - find span value
      if (st.empty())
      {
        span[i] = i + 1;
      }
      else
      {
        span[i] = i - st.top();
      }

      // step3-add current index
      st.push(i);
    }
    return span;
  }
  // TC - O(n)
  // ASC - O(n)
};

int main()
{

  return 0;
}