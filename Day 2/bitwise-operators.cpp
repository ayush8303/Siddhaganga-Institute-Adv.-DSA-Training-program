
#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
  int a = 5, b = 8;
  cout << "Bitwise AND " << (a & b) << endl;
  cout << "Bitwise OR " << (a | b) << endl;
  cout << "Bitwise XOR " << (a ^ b) << endl;
  cout << "NOT of ZERO " << (~0) << endl;
  a = 5;
  int leftShift = (a << 2);
  cout << leftShift << endl;
  b = 10;
  int rightShift = (b >> 2); // floor(10/2^2);
  cout << rightShift << endl;
  return 0;
}