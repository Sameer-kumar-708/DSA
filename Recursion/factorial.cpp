#include <iostream>
using namespace std;

int factoril(int n)
{

  if (n == 0 || n == 1)
  {
    return 1;
  }

  return n * factoril(n - 1);
}

int main()
{

  cout << factoril(5);

  return 0;
}