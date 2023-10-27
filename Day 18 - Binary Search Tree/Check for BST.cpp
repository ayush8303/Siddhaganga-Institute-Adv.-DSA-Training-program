#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  // parameterised constructor
  Node(int key)
  {
    this->data = key;
    // left = NULL;
    // right = NULL;
    left = right = NULL;
  }
};

class Solution
{
public:
  // Function to check whether a Binary Tree is BST or not.
  bool isBST(Node *root, int min = INT_MIN, int max = INT_MAX)
  {
    if (!root)
      return 1;

    // return false if this node voilates the min/max constraint
    if (root->data <= min || root->data >= max)
    {
      return false;
    }

    // bool left = isBST(root->left, min, root->data);
    // bool right = isBST(root->right, root->data, max);
    return isBST(root->left, min, root->data) && isBST(root->right, root->data, max);
  }
};

int main()
{

  return 0;
}