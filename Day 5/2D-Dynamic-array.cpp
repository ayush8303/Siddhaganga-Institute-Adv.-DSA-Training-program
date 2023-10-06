#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
#define endl '\n'

int **create2DArray(int rows, int cols)
{

  // int *arr=new int[rows];

  int **arr = new int *[rows]; // array of pointers
  // arr =  base of array which is of pointer data type

  // allocate memory for each row
  for (int i = 0; i < rows; i++)
  {
    arr[i] = new int[cols];
  }

  // init the array with inc list of numbers
  int value = 1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      arr[i][j] = value;
      value++;
    }
  }
  return arr;
}

int main()
{
  int rows, cols;
  cin >> rows >> cols;

  int **arrays = create2DArray(rows, cols);
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arrays[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
