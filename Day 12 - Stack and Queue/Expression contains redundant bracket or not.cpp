#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int checkRedundancy(string s)
  {
    stack<char> st;

    for (auto &ch : s)
    {
      if (ch != ')')
      {
        st.push(ch);
      }
      else
      {
        // ch==')'

        bool operator_found = false;
        while (!st.empty() && st.top() != '(')
        {
          char top = st.top();
          if (top == '+' || top == '-' || top == '*' || top == '/')
          {
            operator_found = true;
          }
          st.pop();
        }
        st.pop(); // pop the opening bracket
        if (operator_found == false)
        {
          return true;
        }
      }
    }
    return false;
  }
};

int main()
{

  return 0;
}