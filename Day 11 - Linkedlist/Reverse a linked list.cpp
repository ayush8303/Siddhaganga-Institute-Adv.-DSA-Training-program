class Solution
{
public:
  // Function to reverse a linked list.
  struct Node *reverseList(struct Node *head)
  {
    Node *prev = NULL;
    Node *current = head;
    Node *temp;
    while (current != NULL)
    {
      temp = current->next;
      current->next = prev;
      prev = current;
      current = temp;
    }
    return prev;
  }
};