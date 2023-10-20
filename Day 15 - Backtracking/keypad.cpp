#include <bits/stdc++.h>
using namespace std;

// index - >      0 , 1,     2,   3,    4,     5,   6,     7,    8,     9
string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadOutput(int i, string &input, string &curConfig)
{

  // base case
  if (i == input.length())
  {
    cout << curConfig << endl;
    return;
  }

  // rec case
  int currentIndex = (input[i] - '0');

  if (currentIndex == 0 || currentIndex == 1)
  {
    keypadOutput(i + 1, input, curConfig);
  }

  // keypad
  for (int k = 0; k < keypad[currentIndex].length(); k++)
  {
    curConfig += keypad[currentIndex][k];
    keypadOutput(i + 1, input, curConfig);
    curConfig.pop_back();
  }
  return;
}

int main()
{
  string input;
  cin >> input;

  string cur = "";
  keypadOutput(0, input, cur);

  return 0;
}