#include <iostream>
#include <cstring>
using namespace std;

class Product
{
private:
  int id;
  // char name[100];
  char *name; // pointer to dynamic array which stored in heap memory
  int mrp;
  int selling_price;

public:
  // constructor
  Product()
  {
    // overwriting / overloading
    cout << "Inside Constructor" << endl;
  }

  // Parameterised Constructor
  Product(int id, char *n, int mrp, int selling_price)
  {
    cout << "Constructor 2 " << endl;
    this->id = id;
    this->mrp = mrp;
    (*this).selling_price = selling_price;
    // this->name = n; // can't update read only pointer
    // strcpy(this->name, n);
    name = new char[strlen(n) + 1]; // adding for '/0' character
    strcpy(name, n);
  }
  Product(int id)
  {
    cout << "Constructor 3 " << endl;
    this->id = id;
  }

  // overloading copy constructor
  Product(Product &X)
  {
    cout << "Inside copy Constructor " << endl;
    id = X.id;
    selling_price = X.selling_price;
    mrp = X.mrp;
    // strcpy(name, X.name);
    // name = X.name
    name = new char[strlen(X.name) + 1]; // copying content not address i.e creating new dynamic array
    strcpy(name, X.name);
  }

  // similary we need to define our own copy assignment constructor
  void operator=(Product &X)
  {
    // logic for deep copy
    id = X.id;
    name = new char[strlen(X.name) + 1];
    strcpy(name, X.name);
    mrp = X.mrp;
    selling_price = X.selling_price;
  }

  // setters -> set properties value
  void set_name(char *n)
  {
    strcpy(name, n);
  }
  void set_id(int id)
  {
    // id=id;
    this->id = id;
    // (*this).id = id;
  }
  void setMrp(int price)
  {
    if (price < 0)
    {
      mrp = 0;
    }
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

  // getters method
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
    cout << "Id " << id << endl;
    // cout << "Id " << this->id << endl;
    // cout << "Id " << (*this).id << endl;
    cout << "Name " << name << endl;
    cout << "MRP " << mrp << endl;
    cout << "Selling Price " << selling_price << endl;
    cout << "-------------" << endl;
  }

  ~Product()
  {
    // destructor
    cout << "Inside Destructor " << name << endl;
    delete[] name;
  }
};

int main()
{
  Product camera1(54, "GoPro9", 28000, 20000);
  // camera1.set_name("GoPro9");
  // camera1.setMrp(-10);
  // camera1.set_selling_price(500);
  // camera1.set_id(102);

  Product camera2 = camera1;
  camera2.set_name("GoPro8");

  camera1.show_details();
  camera2.show_details();

  cout << "LAST line" << endl;
  return 0;
}