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
  unordered_multimap<string, int> mp;
  // mp["pizza"] = 200;
  // mp["coldrink"] = 50;
  // mp["burger"] = 80;
  mp.insert(make_pair("noodles", 120));
  // mp["burger"] = 85;
  mp.insert(make_pair("noodles", 150));
  mp.insert(make_pair("pizza", 149));
  mp.insert(make_pair("pizza", 179));
  mp.insert(make_pair("pizza", 199));

  // mp.erase("pizza"); -> delete all occurence of key "pizza"
  mp.erase(mp.find("pizza")); // delete one occurence of key "pizza"
  for (pair<string, int> x : mp)
  {
    cout << x.first << ' ' << x.second << endl;
  }

  return 0;
}
