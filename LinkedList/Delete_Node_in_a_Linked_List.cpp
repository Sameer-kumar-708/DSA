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
    next = nullptr;
  }
};

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6};
  Node *Head = nullptr;
  Node *Tail = nullptr;

  for (int i = 0; i < 6; i++)
  {
    if (!Head)
    {
      Head = new Node(arr[0]);
      Tail = Head;
    }
    else
    {
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  // Deleting Node 3 from linked list
  Node *temp = Head;
  Node *prev = nullptr;

  while (temp->data != 4)
  {
    prev = temp;
    temp = temp->next;
  }

  // Delete node
  if (temp != nullptr)
  {
    prev->next = temp->next;
    delete temp;
  }
  Tail = Head;
  while (Tail != nullptr)
  {
    cout << Tail->data << "->";
    Tail = Tail->next;
  }

  cout << "NULL" << endl;

  return 0;
}