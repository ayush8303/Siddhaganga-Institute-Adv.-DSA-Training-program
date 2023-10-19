#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char from, char helper, char to)
{
  if (n == 0)
  {
    return;
  }
  // A B C
  // 1st step -> move n-1 disks from A -> B
  // TowerOfHanoi(n-1,A, C, B);
  TowerOfHanoi(n - 1, from, to, helper);

  // 2nd step -> move nth disk from A -> C
  cout << from << " -> " << to << endl;

  // 3rd step -> move n-1 disks from B->C
  // TowerOfHanoi(n-1,B,A,C)
  TowerOfHanoi(n - 1, helper, from, to);
}

int main()
{
  int n;
  cin >> n;
  TowerOfHanoi(n, 'A', 'B', 'C');
  return 0;
}