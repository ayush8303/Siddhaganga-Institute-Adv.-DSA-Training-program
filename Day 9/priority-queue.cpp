#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{

  // priority_queue<int> pq; // max_heap/ max priority queue
  priority_queue<int, vector<int>, greater<int>> pq; // min heap
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    pq.push(x);
  }

  while (pq.size() > 0)
  {
    int x = pq.top();
    cout << x << ' ';
    pq.pop();
  }

  return 0;
}