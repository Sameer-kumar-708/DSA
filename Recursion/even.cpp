#include <iostream>
using namespace std;

void printEven(int n)
{

  if (n == 0)
  {
    return;
  }

  cout << n << endl;

  printEven(n % 2);
}
int main()
{

  // print even number between  20-->1 using recursion

  printEven(20);

  return 0;
}