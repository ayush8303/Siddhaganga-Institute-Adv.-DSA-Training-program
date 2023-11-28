#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  string minWindow(string s, string t)
  {
    // array as a freq map or you can use a hashmap
    int FP[128] = {0}; // frequency of chars of string t

    int m = s.length();
    int n = t.length();
    for (int i = 0; i < n; i++)
    {
      FP[t[i]]++;
    }
    // sliding window alogrithm

    int cnt = 0;        // no. of characters matched
    int i = 0;          // left contraction
    int start_idx = -1; // start idx for best window
    int min_so_far = INT_MAX;
    int curr_window_size = 0;
    int FS[128] = {0}; // frequency of chars of current window
    for (int j = 0; j < m; j++)
    {
      // expand the window by including the current character
      char ch = s[j];
      FS[ch]++;

      // count how many character have been matched till now (string and pattern)
      if (FP[ch] != 0 && FS[ch] <= FP[ch])
      {
        cnt++;
      }

      // if all characters of the pattern (string t) are found in the current
      // window then we can start contracting
      if (cnt == n)
      {
        while (FP[s[i]] == 0 || FS[s[i]] > FP[s[i]])
        {
          FS[s[i]]--;
          i++;
        }
        curr_window_size = j - i + 1;
        if (curr_window_size < min_so_far)
        {
          start_idx = i;
          min_so_far = curr_window_size;
        }
      }
    }
    if (start_idx == -1)
    {
      return "";
    }
    cout << min_so_far << endl;
    return s.substr(start_idx, min_so_far);
  }
};

int main()
{
}