#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
#include <unordered_set>
#include <set>
using namespace std;

int main()
{

  multiset<int, greater<int>> st;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.insert(x);
  }

  for (int x : st)
  {
    cout << x << ' ';
  }
  return 0;
}
