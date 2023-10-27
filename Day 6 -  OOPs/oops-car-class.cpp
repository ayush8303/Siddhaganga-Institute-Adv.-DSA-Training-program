#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

class Car
{
private:
  int price;
  int model_id;
  char name[100];

public:
  void showDetails()
  {
    cout << "name " << name << endl;
    cout << "model_id " << model_id << endl;
    cout << "price " << price << endl;
  }
  void update_price(int cost)
  {
    price = cost;
  }
  void update_id(int id)
  {
    model_id = id;
  }
  void updateName(char *x)
  {
    strcpy(name, x);
  }
};

int main()
{

  Car swift;
  cout << sizeof(swift) << endl;
  swift.updateName("Swift ");
  swift.update_price(28000);
  swift.update_id(56);

  swift.showDetails();

  return 0;
}
