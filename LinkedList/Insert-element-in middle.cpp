#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

int main()
{
  int arr[5] = {10, 12, 15, 20, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  Node *Head = NULL, *Tail = NULL;

  // Create Linked List
  for (int i = 0; i < n; i++)
  {
    if (!Head)
    {
      Head = new Node(arr[i]); // ✅ fixed
      Tail = Head;
    }
    else
    {
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  // Insert 50 BEFORE 20
  if (Head == NULL)
  {
    cout << "Linked List is empty" << endl;
  }
  else
  {
    Node *temp = Head;
    Node *prev = NULL;

    while (temp != NULL && temp->data != 20)
    {
      prev = temp;
      temp = temp->next;
    }

    if (temp != NULL) // 20 found
    {
      Node *newNode = new Node(50);

      if (prev == NULL) // insert at head
      {
        newNode->next = Head;
        Head = newNode;
      }
      else
      {
        prev->next = newNode;
        newNode->next = temp;
      }
    }
  }

  // Traverse
  Node *curr = Head;
  while (curr != NULL)
  {
    cout << curr->data << "->";
    curr = curr->next;
  }
  cout << "NULL" << endl;

  return 0;
}