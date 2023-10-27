#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

  vector<int> v = {2, 3, 5, 6, 7};
  for (int i = 0; i < 5; i++)
  {
    cout << v[i] << ' ';
  }
  cout << endl;
  // container_name < data_type > :: iterator name_of_iterator;
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++)
  {
    cout << (*it) << ' ';
  }

  // auto it=v.begin();
  // for (; it != v.end(); it++) {
  //   cout << (*it) << ' ';
  // }

  return 0;
}