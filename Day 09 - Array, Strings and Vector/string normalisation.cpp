#include <iostream>
#include <string>
using namespace std;

int skip_whitespace(string &copy, int idx)
{
  while (idx < copy.length() && copy[idx] == ' ')
  {
    idx++;
  }
  return idx;
}
int normalize_word(string &copy, int idx)
{
  int n = copy.size();
  if (idx < n)
  {
    copy[idx] = toupper(copy[idx]);
    idx++;
  }
  while (idx < n and copy[idx] != ' ')
  {
    copy[idx] = tolower(copy[idx]);
    idx++;
  }
  return idx;
}
int main()
{
  string sentence;
  // cin >> sentence;
  getline(cin, sentence);

  string copy = sentence;
  int idx = 0;
  while (idx < copy.length())
  {
    idx = skip_whitespace(copy, idx);
    idx = normalize_word(copy, idx);
  }

  cout << copy;
  return 0;
}