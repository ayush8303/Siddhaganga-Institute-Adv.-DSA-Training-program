
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
#define endl '\n'

int main()
{

  char name[]{"Ayush"};
  for (int i = 0; i < 5; i++)
    cout << name[i];
  cout << endl;
  cout << name << endl;

  int sz = strlen(name); // does not count null character '\0'
  cout << sz << endl;

  return 0;
}