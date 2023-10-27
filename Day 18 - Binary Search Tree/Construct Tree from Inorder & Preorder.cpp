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
  // Function to find the index of target value in the array
  int findIndex(int arr[], int start, int target)
  {
    int i = 0;
    // iterating through the array until the target value is found
    while (arr[start + i] != target)
      i++;
    // returning the index of the target value
    return i;
  }

  // Recursive function to build the binary tree
  Node *buildUtil(int inorder[], int preorder[], int inStart, int preStart, int n)
  {
    // base case: if number of elements is 0, return NULL
    if (n == 0)
      return NULL;

    // create a new node with the value from the preorder array
    Node *ret = new Node(preorder[preStart]);

    // find the index of the value in inorder array
    int i = findIndex(inorder, inStart, preorder[preStart]);

    // recursively build the left and right subtrees
    ret->left = buildUtil(inorder, preorder, inStart, preStart + 1, i);
    ret->right = buildUtil(inorder, preorder, inStart + i + 1, preStart + i + 1, n - (i + 1));

    // return the node
    return ret;
  }

  // Function to build the binary tree using inorder and preorder arrays
  Node *buildTree(int inorder[], int preorder[], int n)
  {
    // call the utility function to build the tree
    return buildUtil(inorder, preorder, 0, 0, n);
  }
};
int main()
{

  return 0;
}