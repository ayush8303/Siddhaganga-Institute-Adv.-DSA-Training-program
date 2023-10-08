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

public: // can access outside the class
  int mrp;
  int selling_price;
  void show_selling_price()
  {
    cout << selling_price << endl;
  }
};

int main()
{

  Product camera;
  // cout << (&camera) << endl;  //classes are stored in any memory
  cout << sizeof(Product) << endl; // 4+100+4+4 -> includes size of all the attributes
  camera.mrp = 100;
  camera.selling_price = 80;
  cout << "MRP " << camera.mrp << endl;
  cout << "Selling Price " << camera.selling_price << endl;

  Product camera2;
  cout << sizeof(camera) << endl; // 4+100+4+4 -> includes size of all the attributes
  camera2.mrp = 200;
  camera2.selling_price = 15;
  cout << "MRP2 " << camera2.mrp << endl;
  cout << "Selling Price2 " << camera2.selling_price << endl;
  return 0;
}