#include <iostream>
using namespace std;
#define endl '\n'

int main()
{

  int day;
  cin >> day;

  switch (day)
  {

  case 1: // if day==1
    cout << "Monday" << endl;
    break;
  case 2: // if day==2
    cout << "Tuesday" << endl;
    break;
  case 3: // if day==3
    cout << "Wednesday" << endl;
    break;
  case 4: // if day==4
    cout << "Thrusday" << endl;
    break;
  case 5: // if day==5
    cout << "Friday" << endl;
    break;
  case 6: // if day==6
    cout << "saturday" << endl;
    break;
  case 7: // if day==7
    cout << "Sunday" << endl;
    break;
  default:
    cout << "Invalid day number";
    break;
  }
  return 0;
}