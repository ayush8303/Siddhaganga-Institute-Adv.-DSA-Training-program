#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  int LSB = (n & 1);

  if (LSB == 1)
    cout << "ODD";
  else
    cout << "EVEN";

  return 0;
}
