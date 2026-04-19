#include <iostream>
#include <vector>
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
  vector<int> arr = {1, 2, 3, 4, 5};

  Node *n1 = new Node(arr[0]);

  Node *Head = NULL, *Tail = NULL;

  while (Head != nullptr)
  {
  }

  cout << n1->data << " " << n1->next;
}
