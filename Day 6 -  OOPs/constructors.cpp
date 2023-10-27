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
  // constructor
  Product()
  { // overwriting/ overloading
    cout << "Inside Constructors" << endl;
  }
  // Parameterised constructor
  Product(int id, char *n, int mrp, int selling_price)
  {
    // this = pointer to the current object
    this->id = id;
    this->mrp = mrp;
    this->selling_price = selling_price;
    // this->name = n; // can't update read only pointer
    // strcpy(this->name,n);
    strcpy(name, n);
  }

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
  void show_details()
  {
    cout << "Id " << this->id << endl;
    // cout << "Id " << id << endl;
    // cout << "Id " << (*this).id << endl;
    cout << "Name " << name << endl;
    cout << "MRP " << mrp << endl;
    cout << "Selling Price " << selling_price << endl;
  }
};

int main()
{

  Product camera(54, "GoPro9", 28000, 20000);
  // camera.set_mrp(-10);
  // camera.set_selling_price(150);
  // cout << camera.get_mrp() << endl;
  // cout << camera.get_selling_price() << endl;
  camera.show_details();
  return 0;
}