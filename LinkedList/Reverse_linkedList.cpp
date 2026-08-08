#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int d)
  {
    data = d;
    next = NULL;
  }
};

int main()
{

  int arr[5] = {1, 2, 3, 4, 5};

  Node *Head = NULL, *Tail = NULL;

  // Create first Node
  for (int i = 0; i < 5; i++)
  {
    if (!Head)
    {
      // first node creation
      Head = new Node(arr[0]);
      Tail = Head;
    }
    else
    {
      //   other node creation by adding element at last
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  // 10->20->30

  // Traverse the Linked List

  Tail = Head;

  while (Tail != NULL)
  {
    cout << Tail->data << "->";
    Tail = Tail->next;
  }
  cout << "NULL" << endl;

  // Reverse LinkedList 1->2->3->4->5->NULL

  Node *curr = Head, *prev = NULL;

  while (curr != NULL)
  {
    Node *future = curr->next;
    curr->next = prev;
    prev = curr;
    curr = future;
  }
  Head = prev;
  Tail = Head;

  while (Tail != NULL)
  {
    cout << Tail->data << "->";
    Tail = Tail->next;
  }
  cout << "NULL" << endl;

  return 0;
}