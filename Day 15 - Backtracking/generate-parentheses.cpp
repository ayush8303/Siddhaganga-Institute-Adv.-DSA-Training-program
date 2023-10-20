#include <bits/stdc++.h>
using namespace std;

// vector<string> balancedParentheses;

void generate(string &curConfig, int open, int close)
{
  if (open == 0 && close == 0)
  {
    // balancedParentheses.push_back(curConfig);
    cout << curConfig << endl;
    return;
  }

  if (open > 0)
  {
    curConfig += '(';
    generate(curConfig, open - 1, close);
    curConfig.pop_back();
  }
  if (close > 0 && open < close)
  {
    curConfig += ')';
    generate(curConfig, open, close - 1);
    curConfig.pop_back();
  }
}
int main()
{

  int n;
  cin >> n;
  string curConfig = "";
  generate(curConfig, n, n);
  return 0;
}