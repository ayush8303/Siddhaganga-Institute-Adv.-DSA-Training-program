
#include <bits/stdc++.h>
using namespace std;

void curSubsequence(int number, string &s)
{
  int j = 0; // index in s
  if (number == 0)
  {
    cout << "" << endl; // empty subsequence
    return;
  }
  while (number > 0)
  {
    int last_bit = number & 1;
    if (last_bit > 0)
    {
      cout << s[j];
    }
    j++;
    number >>= 1;
  }
  cout << endl;
}

int main()
{

  string s;
  cin >> s;

  int n = s.length();

  // 0 --> (2^n) - 1
  for (int i = 0; i < (1 << n); i++)
  {
    curSubsequence(i, s);
  }

  return 0;
}