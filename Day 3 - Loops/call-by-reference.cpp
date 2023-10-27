
#include <iostream>
using namespace std;
#define endl '\n'


void play_music(int *id) {
  cout << "address in play_music function " << id << endl;
  *id = 7;
  cout << "Playing music " << (*id) << endl;
  return ;
}

void play_music(int &id) {
  // cout << (&id) << endl;
  id = 10;
  cout << "Playing music " << id << endl;
}

int main()
{
  int x = 5;
  cout << "address in main function " << (&x) << endl;
  cout << (&x) << endl;
  play_music(x);
  play_music(&x);
  cout << x << endl;
  
  return 0;
}
