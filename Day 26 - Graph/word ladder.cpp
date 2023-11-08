#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int ladderLength(string beginWord, string endWord, vector<string> &wordList)
  {
    unordered_set<string> myset;

    bool isPresent = 0;
    for (string &cur : wordList)
    {
      myset.insert(cur);
      if (cur == endWord)
      {
        isPresent = 1;
      }
    }
    // endword is not present in wordlist
    if (isPresent == false)
    {
      return 0;
    }

    queue<string> q;
    q.push(beginWord);
    int depth = 0;
    while (!q.empty())
    {
      depth++;

      int lsize = q.size(); // no. of element in cur level
      while (lsize--)
      {
        string cur = q.front();
        q.pop();

        // check for all possible 1 depth word
        for (int i = 0; i < cur.length(); i++)
        {
          string temp = cur;
          for (char ch = 'a'; ch <= 'z'; ch++)
          {
            temp[i] = ch;
            if (temp == cur)
            {
              continue;
            }
            if (temp == endWord)
            {
              return depth + 1;
            }
            if (myset.find(temp) != myset.end())
            {
              q.push(temp);
              myset.erase(temp);
            }
          }
        }
      }
    }
    return 0;
  }
};

int main()
{

  return 0;
}