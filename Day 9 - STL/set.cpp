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

  set<int> st;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.insert(x);
  }
  // st.find(x) -> iterator to element x

  // erase element
  // st.erase(2);
  // st.erase(st.find(2)); -> make sure 2 is in the set
  // st.find(2) = st.end() -> if 2 is not present
  st.erase(st.find(8));
  if (st.find(8) == st.end())
  {
    cout << "8 is not present" << endl;
  }

  for (int x : st)
  {
    cout << x << ' ';
  }
  return 0;
}