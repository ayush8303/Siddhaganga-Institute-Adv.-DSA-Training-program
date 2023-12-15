#include <bits/stdc++.h>
using namespace std;
#define int long long int

string s;
vector<int> memo;

int recur(int i)
{
  if (i == s.size())
  {
    return 1;
  }
  if (memo[i] != -1)
  {
    return memo[i];
  }
  int ans = 0;
  if (s[i] >= '1' && s[i] <= '9')
  {
    ans += recur(i + 1);
  }
  if (i + 1 < s.size() && (s[i] == '1'))
  {
    ans += recur(i + 2);
  }
  if (i + 1 < s.size() && (s[i] == '2' && s[i + 1] <= '6'))
  {
    ans += recur(i + 2);
  }
  return memo[i] = ans;
}

int32_t main()
{
  while (true)
  {

    cin >> s;
    if (s == "0")
    {
      break;
    }
    memo.clear();
    memo.resize(s.size(), -1);
    cout << recur(0) << endl;
  }

  return 0;
}