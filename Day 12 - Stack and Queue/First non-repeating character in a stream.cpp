#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string FirstNonRepeating(string A)
  {
    queue<char> q;
    int n = A.length();
    int freq[26] = {0};
    string ans;
    for (int i = 0; i < n; i++)
    {

      freq[A[i] - 'a']++;

      q.push(A[i]);

      while (!q.empty() && freq[q.front() - 'a'] > 1)
      {
        q.pop();
      }

      if (q.empty())
      {
        ans.push_back('#');
      }
      else
      {
        ans.push_back(q.front());
      }
    }
    return ans;
  }
};

int main()
{

  return 0;
}