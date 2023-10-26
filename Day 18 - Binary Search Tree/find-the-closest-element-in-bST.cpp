#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int key;
  Node *left;
  Node *right;

  // parameterised constructor
  Node(int key)
  {
    this->key = key;
    // left = NULL;
    // right = NULL;
    left = right = NULL;
  }
};

class Solution
{
public:
  // Function to find the least absolute difference between any node
  // value of the BST and the given integer.
  int minDiff(Node *root, int K)
  {
    Node *temp = root;
    int ans = INT_MAX;
    while (temp != NULL)
    {
      int current_diff = abs(temp->key - K);

      ans = min(ans, current_diff);

      if (temp->key < K)
      {
        temp = temp->right;
      }
      else
      {
        temp = temp->left;
      }
    }
    return ans;
  }
};

int main()
{

  return 0;
}