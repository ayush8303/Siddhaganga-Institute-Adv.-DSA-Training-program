#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int n = s.length();
    int i = 0, j = 0;
    int max_window_len = 0;
    unordered_map<char, int> mp;

    while (j < n)
    {
      char ch = s[j];
      // if it is inside hashmap and its value >= i, ch is inside current window
      if (mp.find(ch) != mp.end() && mp[ch] >= i)
      {
        i = mp[ch] + 1;
      }
      // update last occ of ch
      mp[ch] = j;
      max_window_len = max(max_window_len, j - i + 1);
      j++;
    }
    return max_window_len;
  }
};

int main()
{
}