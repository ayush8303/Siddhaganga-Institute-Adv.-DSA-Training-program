
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

int main()
{
  int n;
  cin >> n;
  cin.ignore(); // ignores new line character
  char course[n];
  // cin >> course;
  cin.getline(course, n, '.');
  cout << course << endl;
  return 0;
}
