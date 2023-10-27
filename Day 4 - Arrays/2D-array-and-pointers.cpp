#include <iostream>
using namespace std;
#define endl '\n'

void printArray(int (*ptr)[4], int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      // cout << (*(ptr + i))[j] << ' ';

      cout << *(*(ptr + i) + j) << ' ';
      // cout<<ptr[i][j]<<' ';
    }
    cout << endl;
    // ptr++;
  }
}

int main()
{

  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  int(*ptr)[4] = arr; // pointing to an array of 4 elements
  ptr++;

  cout << "Arr " << arr << endl;
  cout << "Address of 0,0 " << &arr[0][0] << endl;

  cout << "Address of 0, 1 " << &arr[0][1] << endl;

  cout << "Arr + 1 " << arr + 1 << endl;
  cout << "Address of ptr " << ptr << endl;
  cout << "Address of 1,0 " << &arr[1][0] << endl;

  printArray(arr, 3);

  return 0;
}
