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
  map<string, int> mp;
  mp["pizza"] = 200;
  mp["coldrink"] = 50;
  mp["burger"] = 80;
  mp.insert(make_pair("noodles", 120));
  mp["burger"] = 85;
  mp.insert(make_pair("noodles", 150));
  // mp.erase("pizza");
  mp.erase(mp.find("pizza"));
  for (pair<string, int> x : mp)
  {
    cout << x.first << ' ' << x.second << endl;
  }

  return 0;
}