#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{

  deque<int> first;                               // empty deque of int
  deque<int> second(4, 100);                      // four int with value 100
  deque<int> third(second.begin(), second.end()); // 100 100 100 100
  deque<int> fourth(third);

  // deque<int> dq;
  // dq.push_back(5);
  // dq.pop_back();
  // dq.push_front(1);
  // dq.pop_front();

  // // access
  // dq.front();
  // dq.back();

  // auto x = 10.2;
  // cout << x << ' ';

  deque<int> dq(10);

  for (int i = 0; i < 10; i++)
    dq[i] = i + 1;
  for (auto x : dq)
  {
    cout << x << ' ';
  }

  return 0;
}