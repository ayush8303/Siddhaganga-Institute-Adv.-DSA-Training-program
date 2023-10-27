#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
#include <unordered_set>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
  multimap<string, int> mp;
  // mp["pizza"] = 200;  -> invalid syntax

  mp.insert(make_pair("noodles", 120));

  mp.insert(make_pair("noodles", 150));
  // mp.erase("pizza");
  //  mp.erase(mp.find("pizza"));
  for (pair<string, int> x : mp)
  {
    cout << x.first << ' ' << x.second << endl;
  }

  return 0;
}