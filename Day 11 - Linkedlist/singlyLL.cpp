#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;

class node
{
public: // access modifier
  int data;
  node *next;

  node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

// linked list
void insertAtHead(node *&head, int data)
{
  if (head == NULL)
  {
    head = new node(data);
    return;
  }
  // otherwise
  node *n = new node(data);
  n->next = head;
  head = n;
}

void printLL(node *head)
{
  if (head == NULL)
  {
    cout << "Empty LL" << endl;
  }
  while (head != NULL)
  {
    cout << head->data << " ----> ";
    head = head->next;
  }
}

int main()
{
  node *head = NULL;
  insertAtHead(head, 4);
  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 4);
  printLL(head);
  return 0;
}