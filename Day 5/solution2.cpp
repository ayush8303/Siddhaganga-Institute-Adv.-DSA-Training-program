#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

int main()
{
  string s;
  cin >> s;

  int n = s.length();
  int maxFreq = 0;
  int freq[26] = {0};
  for (int i = 0; i < n; i++)
  {
    char ch = s[i];
    freq[ch - 'a']++;
    // freq[ch-'a']=freq[ch-'a']+1;
    // if ch=='c' -> 99-97=2
    if (freq[ch - 'a'] > maxFreq)
    {
      maxFreq = freq[ch - 'a'];
    }
  }
  // int maxFreq = 0;
  // for (int i = 0; i < 26; i++) {
  //   if (freq[i] > maxFreq) {
  //     maxFreq = freq[i];
  //   }
  // }
  char ans = 'a';
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] == maxFreq)
    {
      ans = i + 'a';
      // if i==3 : 3+97 = 100 -> ans = 'd'
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
