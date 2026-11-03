#include <iostream>
using namespace std;

int fibonacii(int n)
{

  if (n < 2)
  {
    return 1;
  }

  return fibonacii(n - 1) + fibonacii(n - 2);
}

int main()
{

  cout << fibonacii(5);

  return 0;
}