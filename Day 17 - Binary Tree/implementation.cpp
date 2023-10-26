#include <bits/stdc++.h>
using namespace std;

struct Node
{

  int data;
  // int *ptr;
  struct Node *left;
  struct Node *right;

  Node(int data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

Node *buildTree()
{

  int key;
  cin >> key;

  if (key == -1)
  {
    return NULL;
  }

  Node *n = new Node(key);
  n->left = buildTree();
  n->right = buildTree();
  return n;
}

void inorder(Node *root)
{ // Left Root Right
  if (root == NULL)
  {
    return;
  }
  inorder(root->left);
  cout << root->data << ' ';
  inorder(root->right);
}

void preorder(Node *root)
{ // Root Left Right
  if (root == NULL)
    return;

  cout << root->data << ' ';
  preorder(root->left);
  preorder(root->right);
}

void postorder(Node *root)
{
  if (root == NULL)
    return;

  postorder(root->left);
  postorder(root->right);
  cout << root->data << ' ';
}

void levelOrder(Node *root)
{

  queue<Node *> q;
  q.push(root);
  // !false = true;
  while (!q.empty())
  {

    int size = q.size();
    for (int i = 1; i <= size; i++)
    {
      Node *cur = q.front();
      q.pop();
      cout << cur->data << ' ';

      if (cur->left != NULL)
      {
        q.push(cur->left);
      }

      if (cur->right != NULL)
      {
        q.push(cur->right);
      }
    }
    cout << endl;
  }
}

int main()
{
  Node *root = buildTree();
  // inorder(root);
  // preorder(root);
  // postorder(root);
  levelOrder(root);
  return 0;
}
