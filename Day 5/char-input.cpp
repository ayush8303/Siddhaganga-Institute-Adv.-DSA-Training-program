#include <iostream>
#include <cctype>
using namespace std;
#define endl '\n'

int main()
{

  char ch;
  // cin >> ch; //
  ch = cin.get(); // Read a single char, that can be white space or endl as well
  ch = toupper(ch);
  cout << ch << endl;

  return 0;
}
