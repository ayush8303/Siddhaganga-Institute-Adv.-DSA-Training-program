class Solution
{
public:
  void rearrange(struct Node *odd)
  {
    struct Node *even = NULL;

    while (odd != NULL && odd->next != NULL)
    {
      struct Node *temp = odd->next->next; // next odd node
      odd->next->next = even;              // adding node at beginning of even sublist
      even = odd->next;                    // moving head pointer of even sublist
      odd->next = temp;                    // connecting odd to next odd

      if (temp != NULL)
      {
        odd = temp;
      }
    }
    odd->next = even;
    // TC - O(n)
    // ASC - O(1)
  }
};