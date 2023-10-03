#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
  cout << "Unary Operators" << endl;
  cout << "Increment Operator" << endl;
  int a = 10;
  int b = ++a; // b=a+1 ->  inc then assign  -> b= 10 + 1
  cout << b << endl;
  int c = a++; // assign then inc -> c=11, a=11+1
  cout << c << endl;
  cout << a << endl;
  cout << "Decrement Operator" << endl;
  a = 10, b = 0;
  b = --a; // dec then assign -> b=a-1=10-1=9, a=9
  c = a--; // assign then dec  -> c=9,a=8
  cout << "a " << a << endl;
  cout << "b " << b << endl;
  cout << "c " << c << endl;
  return 0;
}
