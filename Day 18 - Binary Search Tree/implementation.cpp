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

Node *insert(Node *root, int key)
{
  if (root == NULL)
  {
    return new Node(key);
  }
  // rec case
  if (key < root->key)
  {
    root->left = insert(root->left, key);
  }
  else
  {
    root->right = insert(root->right, key);
  }
  return root;
}
void inorder(Node *root)
{
  if (!root)
  {
    return;
  }
  inorder(root->left);
  cout << root->key << ' ';
  inorder(root->right);
}
int main()
{

  Node *root = NULL;
  int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
  for (int x : arr)
  {
    root = insert(root, x);
  }
  inorder(root);
  return 0;
}
