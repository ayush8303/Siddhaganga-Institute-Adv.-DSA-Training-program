#include <bits/stdc++.h>
using namespace std;

struct Node
{

  int key;
  // int *ptr;
  struct Node *left;
  struct Node *right;

  Node(int data)
  {
    this->key = data;
    left = NULL;
    right = NULL;
  }
};

class Solution
{
public:
  // returns the inorder successor of the Node x in BST (rooted at 'root')
  Node *inOrderSuccessor(Node *root, Node *x)
  {

    // case1 -> if right subtree
    if (x->right != NULL)
    {
      x = x->right;
      while (x->left != NULL)
      {
        x = x->left;
      }
      return x;
    }

    Node *temp = root;
    Node *succ = NULL;

    while (temp != NULL)
    {
      if (temp->key > x->key)
      {
        succ = temp;
        temp = temp->left;
      }
      else if (temp->key < x->key)
      {
        temp = temp->right;
      }
      else
      {
        break;
      }
    }
    return succ;
  }
};
int main()
{
  return 0;
}