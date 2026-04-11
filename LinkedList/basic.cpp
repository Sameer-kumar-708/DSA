#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val) // constructor to initialize the node
  {
    data = val;
    next = NULL;
  }
};

int main()
{
  Node *head = new Node(10);   // creating the head node with value 10
  Node *second = new Node(20); // creating the second node with value 20
  Node *third = new Node(30);  // creating the third node with value 30

  head->next = second;
  second->next = third;

  Node *temp = head; // temp variable to store the address of the current node
  while (temp != NULL)
  {
    cout << temp->data << " -> "; // 10 -> 20 -> 30
    temp = temp->next;            // move to 20
  }
  cout << "NULL" << endl;
  return 0;
}