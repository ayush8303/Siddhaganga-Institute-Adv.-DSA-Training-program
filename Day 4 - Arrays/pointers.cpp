#include <iostream>
using namespace std;
#define endl '\n'




int main()
{
  int x = 10;

  int *xptr = &x; // no restrictions on spaces


  cout << "Address" << endl;
  cout << (&x) << endl;
  cout << xptr << endl;

  cout << endl;

  cout << "Values" << endl;
  cout << x << endl;
  cout << *(&x) << endl;
  cout << (*xptr) << endl;

  cout << endl;

  cout << "Address of pointer variable" << endl;
  int ** xxptr = &xptr;
  cout << (&xptr) << endl;
  cout << xxptr << endl;

  cout << (**xxptr) << endl;  // *(&x)=x;

  return 0;
}
