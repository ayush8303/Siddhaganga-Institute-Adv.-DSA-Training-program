
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

class Product
{
private: // cant't access outside the class
  int id;
  char name[100];
  int mrp;
  int selling_price;

public:
  // setters -> set properties value
  void set_mrp(int price)
  {
    if (price < 0)
      mrp = 0;
    else
    {
      mrp = price;
    }
  }
  void set_selling_price(int price)
  {
    // additional checks
    if (price > mrp)
    {
      selling_price = mrp;
    }
    else
    {
      selling_price = price;
    }
  }

  // getters -> get properties value
  int get_mrp()
  {
    return mrp;
  }
  int get_selling_price()
  {
    return selling_price;
  }
};

int main()
{

  Product camera;
  camera.set_mrp(-10);
  camera.set_selling_price(150);
  cout << camera.get_mrp() << endl;
  cout << camera.get_selling_price() << endl;
  return 0;
}
