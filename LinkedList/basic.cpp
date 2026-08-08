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
  int arr[5] = {2, 4, 6, 8, 10};
  Node *Head = NULL, *Tail = NULL;

  for (int i = 0; i < 5; i++)
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

  Tail = Head;
  while (Tail != NULL)
  {

    cout << Tail->data << "->";
    Tail = Tail->next;
  }
  cout << "NULL" << " ";

  return 0;
}