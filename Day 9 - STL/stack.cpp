#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{

  stack<string> books;
  books.push("C++");
  books.push("Java");
  books.push("python");
  books.push("Javascript");
  while (books.size() > 0)
  {
    cout << books.top() << endl;
    books.pop();
  }
  return 0;
}
