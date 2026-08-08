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

  int arr[] = {1, 2, 3, 4, 5, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  Node *Head = NULL, *Tail = NULL;

  for (int i = 0; i < n; i++)
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

  while (Head != NULL)
  {
    cout << Head->data << "->";
    Head = Head->next;
  }
  cout << "NULL" << endl;

  return 0;
}