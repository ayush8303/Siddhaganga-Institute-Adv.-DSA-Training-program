#include <bits/stdc++.h>
using namespace std;

// 0 -> empty cell
// 1 -> Queen

void printBoard(int n, int board[][20])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << ' ';
    }
    cout << endl;
  }
}

bool canPlace(int board[][20], int n, int i, int j)
{

  // column
  for (int k = 0; k < i; k++)
  {
    if (board[k][j] == 1)
    {
      return false;
    }
  }

  // upward left diagonal
  int x = i;
  int y = j;
  while (x >= 0 && y >= 0)
  {
    if (board[x][y] == 1)
    {
      return false;
    }
    x--, y--;
  }

  // upward right diagonal
  x = i;
  y = j;
  while (x >= 0 && y < n)
  {
    if (board[x][y] == 1)
    {
      return false;
    }
    x--, y++;
  }

  return true;
}

bool solveQueen(int n, int board[][20], int i)
{

  // base case
  if (i == n)
  {
    // print the board
    printBoard(n, board);
    return true;
  }

  // rec case
  for (int j = 0; j < n; j++)
  {

    // whether the current cell i,j is safe or not
    if (canPlace(board, n, i, j))
    {

      // place queen
      board[i][j] = 1;

      bool success = solveQueen(n, board, i + 1);
      if (success)
      {
        return true;
      }
      //  backtrack
      board[i][j] = 0;
    }
  }
  return false;
}

int main()
{

  int n;
  cin >> n;

  int board[20][20];
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      board[i][j] = 0;
    }
  }

  solveQueen(n, board, 0);

  return 0;
}