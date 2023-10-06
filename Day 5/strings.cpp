#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

int main()
{
  // string s = "Hello";

  // cout << s.at(1) << endl;
  string s1;
  string s2{"hello"};
  string s3{s2};
  string s4{"Hello", 3}; // Hel
  string s5{s2, 0, 4};   // Hell
  string s6(5, 'a');     // xxx
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  cout << s5 << endl;
  cout << s6 << endl;
}
