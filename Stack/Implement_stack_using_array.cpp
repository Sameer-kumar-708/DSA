#include <iostream>
using namespace std;

class stack
{

public:
  int arr[100];
  int index;

  stack()
  {
    index = -1;
  }

  void push(int val)
  {

    if (index < 99)
    {
      index++;
      arr[index] = val;
      cout << val << " pushed in stack..." << endl;
    }
    else
    {
      cout << "Stack Overflow!" << endl;
    }
  }
};

int main()
{

  stack s;
  s.push(3);
  s.push(2);
  s.push(4);
  s.push(5);
  s.push(6);

  return 0;
}