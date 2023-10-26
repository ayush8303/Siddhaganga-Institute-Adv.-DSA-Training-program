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

class Pair
{
public:
  int inc;
  int exc;
};
class Solution
{
public:
  Pair recur(Node *root)
  {
    Pair p;
    if (root == NULL)
    {
      p.inc = 0;
      p.exc = 0;
      return p;
    }
    Pair left = recur(root->left);
    Pair right = recur(root->right);

    // include root
    p.inc = root->data + left.exc + right.exc;

    // exclude root
    p.exc = max(left.inc, left.exc) + max(right.inc, right.exc);
    return p;
  }
  int getMaxSum(Node *root)
  {
    Pair ans = recur(root);
    return max(ans.inc, ans.exc);
  }
};
int main()
{
  return 0;
}