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

Node *recur(vector<int> &arr, int start, int end)
{
  if (start > end)
  {
    return NULL;
  }
  if (start == end)
  {
    return new Node(arr[start]);
  }

  // get the middle element and make it root
  int mid = (start + end) / 2;
  Node *root = new Node(arr[mid]);

  root->left = recur(arr, start, mid - 1);
  root->right = recur(arr, mid + 1, end);

  return root;
}

Node *sortedArrayToBST(vector<int> arr)
{
  int n = arr.size();
  return recur(arr, 0, n - 1);
}

int main()
{

  return 0;
}