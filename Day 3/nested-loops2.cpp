
#include <iostream>
using namespace std;
#define endl '\n'


/*
print pattern: 
n=4

   1
  232
 34543
4567654


*/

int main()
{
  int n;
  cin >> n;


  // Rows
  for (int i = 1; i <= n; i++) {

    // spaces
    for (int cnt = 1; cnt <= (n - i); cnt++) {
      cout << " ";
    }

    // inc numbers
    int val = i;
    for (int cnt = 1; cnt <= i; cnt++) {
      cout << val;
      val++;
    }

    // dec number
    val = val - 2;
    for (int cnt = 1; cnt <= (i - 1); cnt++) {
      cout << val;
      val--;
    }
    cout << endl;
  }

  return 0;
}
