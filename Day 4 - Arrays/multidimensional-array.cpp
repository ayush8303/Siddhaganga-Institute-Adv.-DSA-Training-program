#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
  // 1D array
  int arr[5] = {1, 2, 3, 4, 5}; // read only pointer
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  // 2D array
  int rows, cols;
  cin >> rows >> cols;
  int arr2[rows][cols];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr2[i][j];
    }
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr2[i][j] << ' ';
    }
    cout << endl;
  }

  // 3D array
  int n, m, k;
  cin >> n >> m >> k;
  int arr3[n][m][k];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      for (int l = 0; l < k; l++)
      {
        cin >> arr3[i][j][l];
      }
    }
  }

  return 0;
}
