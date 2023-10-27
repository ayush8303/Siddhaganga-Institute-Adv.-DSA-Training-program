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

  unordered_multiset<int> st;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.insert(x); // O(1)
  }

  for (int x : st)
  {
    cout << x << ' ';
  }
  return 0;
}
