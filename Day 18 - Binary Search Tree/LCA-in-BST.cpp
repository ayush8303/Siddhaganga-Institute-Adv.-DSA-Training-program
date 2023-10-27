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
  Node *LCA(Node *root, int n1, int n2)
  {
    if (!root)
      return NULL;

    // case 2 : root == n1 or root == n2
    if (root->data == n1 or root->data == n2)
    {
      return root;
    }

    // right recursive call
    if (root->data < n1 and root->data < n2)
    {
      return LCA(root->right, n1, n2);
    }

    // left recursive call
    if (root->data > n1 and root->data > n2)
    {
      return LCA(root->left, n1, n2);
    }

    // case 1
    return root;
  }
};
int main()
{

  return 0;
}